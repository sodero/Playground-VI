//------------------------------------------------------------------------------
// strop.c:
//
// String operations
//------------------------------------------------------------------------------
// Copyright (C) 2018-2019, Ola Söder. All rights reserved.
// Licensed under the AROS PUBLIC LICENSE (APL) Version 1.1
//------------------------------------------------------------------------------

#include "alloc.h"
#include "error.h"
#include "eval.h"
#include "strop.h"
#include "util.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef AMIGA
#include <dos/dos.h>
#include <proto/dos.h>
#endif

//------------------------------------------------------------------------------
// (cat <string1> <string2>...)
//     returns concatenation of strings
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_cat(entry_p contxt)
{
    // We need atleast one string.
    C_SANE(1, NULL);

    // Start with a string length of 64.
    size_t cnt = 64;
    char *buf = DBG_ALLOC(calloc(cnt + 1, 1));

    if(!buf)
    {
        // Out of memory.
        PANIC(contxt);
        R_CUR;
    }

    size_t len = 0, cur = 0;

    // Iterate over all arguments.
    while(contxt->children[cur] && contxt->children[cur] != end())
    {
        // Resolve and get a string representation
        // of the current argument.
        const char *arg = str(contxt->children[cur++]);
        size_t alen;

        // If we couldn't resolve the current argument,
        // return an empty string.
        if(DID_ERR)
        {
            free(buf);
            R_EST;
        }

        // Get length of the current argument.
        alen = strlen(arg);

        // Is the current string empty?
        if(!alen)
        {
            // Proceed with the next argument.
            continue;
        }

        // Increase the total string length.
        len += strlen(arg);

        // If we're about to exceed the current buffer,
        // allocate a new one big enough.
        if(len > cnt)
        {
            char *tmp;

            // Double up until we have enough.
            while(cnt && cnt < len)
            {
                cnt = cnt << 1;
            }

            tmp = DBG_ALLOC(calloc(cnt + 1, 1));

            // Copy the contents to the new buffer
            // and free the old one.
            if(tmp && cnt)
            {
                memcpy(tmp, buf, len - alen + 1);
                free(buf);
                buf = tmp;
            }
            else
            {
                // Out of memory.
                PANIC(contxt);
                free(tmp);
                free(buf);
                R_EST;
            }
        }

        // By now we're ready to append.
        strncat(buf, arg, cnt - strlen(buf));
    }

    // Unless we're out of memory, buf will
    // will contain the concatenation of all
    // the children.
    R_STR(buf);
}

//------------------------------------------------------------------------------
// ("<fmt>" <expr1> <expr2>)
//     returns a formatted string
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_fmt(entry_p contxt)
{
    // The format string is in the name of this contxt.
    // It will hold a maximum length of specifiers / 2.
    char *ret = NULL, *fmt = contxt ? contxt->name : NULL;
    char **sct = fmt ? DBG_ALLOC(calloc((strlen(fmt) >> 1) + 1,
                                 sizeof(char *))) : NULL;

    if(sct)
    {
        size_t ndx = 0, off = 0, cnt = 0, len = 0;
        entry_p *arg = contxt->children;

        // Scan the format string.
        for(; fmt[ndx]; ndx++)
        {
            // Skip non format specifiers.
            if(fmt[ndx] != '%')
            {
                continue;
            }

            // If escape translate into fprintf escape and skip.
            if(ndx && fmt[ndx - 1] == '\\')
            {
                fmt[ndx - 1] = '%';
                continue;
            }

            // If this is a specifier that we recognize, then allocate a
            // new string with just this specifier, nothing else.
            if(fmt[++ndx] == 's' || (fmt[ndx++] == 'l' && fmt[ndx] == 'd'))
            {
                sct[cnt] = DBG_ALLOC(calloc(ndx - off + 2, 1));

                if(sct[cnt])
                {
                    memcpy(sct[cnt], fmt + off, ndx - off + 1);
                    off = ndx + 1;
                    cnt++;
                }
                else
                {
                    // Out of memory
                    PANIC(contxt);
                }
            }
            else
            {
                ERR(ERR_FMT_INVALID, contxt->name);
                break;
            }
        }

        // Iterate over all format specifiers and arguments and do the
        // appropriate conversions and formating.
        if(cnt)
        {
            for(cnt = 0; sct[cnt]; cnt++)
            {
                if(arg && *arg && *arg != end())
                {
                    // Original string length.
                    size_t oln = strlen(sct[cnt]);

                    // Format string.
                    if(sct[cnt][oln - 1] == 's')
                    {
                        char *val = str(*arg);
                        size_t nln = oln + strlen(val);
                        char *new = DBG_ALLOC(calloc(nln + 1, 1));

                        // Replace the current format string with the
                        // corresponding formated string.
                        if(new)
                        {
                            int sln = snprintf(new, nln, sct[cnt], val);
                            len += sln > 0 ? (size_t) sln : 0;
                            free(sct[cnt]);
                            sct[cnt] = new;
                        }
                        else
                        {
                            // Out of memory
                            PANIC(contxt);
                            len = 0;
                            break;
                        }
                    }
                    else
                    // Format numeric value.
                    if(sct[cnt][oln - 1] == 'd')
                    {
                        int val = num(*arg);
                        size_t nln = oln + LG_NUMLEN;
                        char *new = DBG_ALLOC(calloc(nln + 1, 1));

                        // Replace the current format string with
                        // the corresponding formated string.
                        if(new)
                        {
                            int sln = snprintf(new, nln, sct[cnt], val);
                            len += sln > 0 ? (size_t) sln : 0;
                            free(sct[cnt]);
                            sct[cnt] = new;
                        }
                        else
                        {
                            // Out of memory
                            PANIC(contxt);
                            len = 0;
                            break;
                        }
                    }
                    else
                    {
                        // Argument <-> specifier mismatch.
                        ERR(ERR_FMT_MISMATCH, contxt->name);
                    }

                    // Next specifier -> argument.
                    arg++;
                }
                else
                {
                    // Fail if the number of arguments and the number
                    // of specifiers don't match.
                    ERR(ERR_FMT_MISSING, contxt->name);
                    len = 0;
                    break;
                }
            }
        }

        // Concatenate all formated strings.
        if(cnt && len)
        {
            // Allocate memory to hold all of them.
            len += strlen(fmt + off) + 1;
            ret = DBG_ALLOC(calloc(len, 1));

            if(ret)
            {
                // All format strings.
                for(cnt = 0; sct[cnt]; cnt++)
                {
                    strncat(ret, sct[cnt], len - strlen(ret));
                }

                // Suffix.
                strncat(ret, fmt + off, len - strlen(ret));
            }
            else
            {
                // Out of memory
                PANIC(contxt);
            }
        }

        // Free all temporary format strings.
        for(cnt = 0; sct[cnt]; cnt++)
        {
            free(sct[cnt]);
        }

        // Free scatter list.
        free(sct);

        // Without format specifiers, the format string
        // is the return value.
        if(!cnt)
        {
            ret = DBG_ALLOC(strdup(fmt));
        }

        // Fail if the number of arguments and the number
        // of specifiers don't match, and we're in strict
        // mode.
        if(arg && *arg && *arg != end() && get_numvar(contxt, "@strict"))
        {
            ERR(ERR_FMT_UNUSED, contxt->name);
        }
        else if(ret)
        {
            // Success.
            R_STR(ret);
        }
    }
    else
    {
        // Either something is terribly broken, or we're out of memory
        PANIC(contxt);
        free(sct);
        R_CUR;
    }

    // Return empty string on failure.
    free(ret);
    R_EST;
}

//------------------------------------------------------------------------------
// (pathonly <path>)
//     return dir part of path (see fileonly)
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_pathonly(entry_p contxt)
{
    // We need one argument, a full path.
    if(c_sane(contxt, 1))
    {
        const char *arg = str(C_ARG(1));
        size_t len = strlen(arg);

        // Scan backwards.
        while(len--)
        {
            // If we find a delimiter, then we have the path to the left of it.
            if(arg[len] == '/' || arg[len] == ':' )
            {
                // Get termination for free.
                char *ret = DBG_ALLOC(calloc(len + 2, 1));

                if(!ret)
                {
                    // Out of memory.
                    PANIC(contxt);
                    break;
                }

                // Copy full path.
                memcpy(ret, arg, len + 1);

                // Cut trailing '/' if preceeded by
                // something absolute, dir or vol.
                if(len > 1 && ret[len] == '/' && ret[len - 1] != '/' &&
                   ret[len - 1] != ':')
                {
                    ret[len] = '\0';
                }

                R_STR(ret);
            }
        }

        // Return empty string on failure.
        R_EST;
    }

    // The parser is broken
    PANIC(contxt);
    R_CUR;
}

//------------------------------------------------------------------------------
// (patmatch <pattern> <string>)
//     Does <pattern> match <string> ? TRUE : FALSE
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_patmatch(entry_p contxt)
{
    // Two arguments.
    C_SANE(2, NULL);

    #if defined(AMIGA) && !defined(LG_TEST)
    // Use the global buffer.
    char *buf = get_buf(),
         *pat = str(C_ARG(1)),
         *mat = str(C_ARG(2));

    LONG w = ParsePattern(pat, buf, buf_size());

    // Can we parse the pattern?
    if(w >= 0)
    {
        // Use pattern matching if we have one or more wildcards, otherwise use
        // plain strcmp().
        int r = w ? MatchPattern(buf, mat) : !strcmp(pat, mat);
        R_NUM(r ? 1 : 0);
    }
    else
    {
        // We probably had a buffer overflow.
        ERR(ERR_OVERFLOW, pat);
        R_NUM(LG_FALSE);
    }
    #else
    // Testing.
    R_NUM(LG_FALSE);
    #endif
}

//------------------------------------------------------------------------------
// (strlen <string>)
//     returns string length
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_strlen(entry_p contxt)
{
    // One argument.
    C_SANE(1, NULL);

    // Set and return.
    R_NUM((int) strlen(str(C_ARG(1))));
}

//------------------------------------------------------------------------------
// (substr <string> <start> [<count>])
//     returns a substring of <string>
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_substr(entry_p contxt)
{
    // We need at least two arguments.
    C_SANE(2, NULL);

    char *arg = str(C_ARG(1));
    int off = num(C_ARG(2)), len = (int) strlen(arg);

    // Is there a limitation on the number of characters?
    if(C_ARG(3) && C_ARG(3) != end())
    {
        // Get the number of characters to copy.
        int chr = num(C_ARG(3));

        // Use the limitations used by the CBM installer.
        if(off >= len || chr <= 0 || off < 0)
        {
            // Empty string fallback.
            R_EST;
        }

        char *ret = DBG_ALLOC(calloc((size_t) len + 1, 1));

        if(!ret)
        {
            // Out of memory.
            PANIC(contxt);
            R_EST;
        }

        // Cap all values.
        len -= off;
        len = len < chr ? len : chr;

        // Copy, set and return.
        memcpy(ret, arg + off, len);
        R_STR(ret);
    }

    // Copy until the end of the string. Max cap.
    if(off >= len)
    {
        // Empty string fallback.
        R_EST;
    }

    // Min cap.
    if(off > 0)
    {
        char *ret = DBG_ALLOC(calloc((size_t) len + 1, 1));

        if(!ret)
        {
            // Out of memory.
            PANIC(contxt);
            R_EST;
        }

        // All values are already capped, just copy.
        memcpy(ret, arg + off, len - off);
        R_STR(ret);
    }

    // Return full string.
    return C_ARG(1);
}

//------------------------------------------------------------------------------
// (tackon <path> <file>)
//     return properly concatenated file to path
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//------------------------------------------------------------------------------
entry_p m_tackon(entry_p contxt)
{
    // Two arguments.
    C_SANE(2, NULL);

    // All work is done by the helper.
    char *ret = h_tackon(contxt, str(C_ARG(1)), str(C_ARG(2)));

    // Did we fail?
    if(!ret)
    {
        // Return empty string. Error codes are set by h_tackon().
        R_EST;
    }

    // Success.
    R_STR(ret);
}

//------------------------------------------------------------------------------
// Name:        h_tackon
// Description: Concatenate directory and file strings
// Input:       entry_p contxt:     The execution context.
//              const char *pre:    The directory.
//              const char *suf:    The file.
// Return:      const char *:       The dir/file concatenation.
//------------------------------------------------------------------------------
char *h_tackon(entry_p contxt, const char *pre, const char *suf)
{
    // We need a path and a file.
    if(!pre || !suf)
    {
        return NULL;
    }

    size_t lep = strlen(pre), les = strlen(suf);

    // No point doing this if both strings are empty.
    if(!lep && !les)
    {
        return NULL;
    }

    // If the filename ends with a delimiter, it's not a valid filename.
    // Only fail if we're running in 'strict' mode.
    if(les && (suf[les - 1] == '/' || suf[les - 1] == ':')
       && get_numvar(contxt, "@strict"))
    {
        ERR(ERR_NOT_A_FILE, suf);
        return NULL;
    }

    // Ignore the path part if the file part is an absolute Amiga path.
    if(strchr(suf, ':'))
    {
        // Empty path.
        lep = 0;
    }

    char *ret = NULL;

    // If the path is empty, the result equals the filename.
    if(!lep)
    {
        ret = DBG_ALLOC(strdup(suf));

        if(!ret)
        {
            // Out of memory.
            PANIC(contxt);
        }

        return ret;
    }

    // If the filename is empty, the result equals the path.
    if(!les)
    {
        ret = DBG_ALLOC(strdup(pre));

        if(!ret)
        {
            // Out of memory.
            PANIC(contxt);
        }

        return ret;
    }


    // Allocate memory to hold path, filename, delimiter and termination.
    size_t let = lep + les + 2;
    ret = DBG_ALLOC(calloc(let, 1));

    if(!ret)
    {
        // Out of memory.
        PANIC(contxt);
        return NULL;
    }

    // Copy the path.
    memcpy(ret, pre, lep);

    // Insert delimiter if none exist.
    if(pre[lep - 1] != '/' && pre[lep - 1] != ':')
    {
       strncat(ret, "/", let - strlen(ret));
    }

    // Concatenate the result.
    strncat(ret, suf, let - strlen(ret));
    return ret;
}
