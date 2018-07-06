//----------------------------------------------------------------------------
// init.c: 
//
// Initilization by means of prepending and appending code.
//----------------------------------------------------------------------------
// Copyright (C) 2018, Ola Söder. All rights reserved.
// Licensed under the AROS PUBLIC LICENSE (APL) Version 1.1
//----------------------------------------------------------------------------

#include "alloc.h"
#include "args.h"
#include "control.h"
#include "exit.h"
#include "information.h"
#include "init.h"
#include "procedure.h"
#include "symbol.h"
#include "util.h"

#include <string.h>

//----------------------------------------------------------------------------
// Stringification
//----------------------------------------------------------------------------
#define STR(X) #X
#define VER(X) STR(X)

//----------------------------------------------------------------------------
// InstallerNG version information
//----------------------------------------------------------------------------
#define MAJOR 43
#define MINOR 3

static char version[] __attribute__((used)) = "\0$VER: InstallerLG " 
                                               VER(MAJOR) "." VER(MINOR) 
                                              " [ALPHA4]";

//----------------------------------------------------------------------------
// Name:        init
// Description: Prepend / append startup and shutdown code.
// Input:       entry_p contxt:  The start symbol, refer to the parser. 
// Return:      entry_p:         Start + startup / shutdown additions.
//----------------------------------------------------------------------------
entry_p init(entry_p contxt)
{
    // If we don't have a context with 
    // children the parser is broken.
    if(contxt &&
       contxt->children)
    {
        // Iterator. 
        entry_p e = NULL; 

        // Only on Amiga, otherwise tests will break, they don't
        // expect any default (welcome) or (exit):s.
        #ifdef AMIGA 
        // Search for a 'welcome' in the root, if there is one
        // (or two) in one of the children then so be it, then 
        // they are probably there for a reason. 
        entry_p *c = contxt->children; 

        while(*c && *c != end())
        {
            // Match function pointer rather than function name
            // since the latter can lie to us (and is slower). 
            if((*c)->type == NATIVE &&
               (*c)->call == m_welcome)
            {
                e = *c; 
                break; 
            }

            c++; 
        }

        // If no (welcome) is found insert a default one on top
        if(!e)
        {
            // The line numbers and naming are for debugging 
            // purposes only. 
            e = new_native
            (
                strdup("welcome"), __LINE__, m_welcome, 
                push
                (
                    new_contxt(), 
                    new_string(strdup("Welcome"))
                ),
                NUMBER
            );

            // Add to the root and reparent. 
            if(e)
            {
                append(&contxt->children, e); 
                e->parent = contxt; 
            }

            // Rotate right to make it end up on top. 
            ror(contxt->children);
        }
        #endif
        // Create default error handler, it simply returns '0'
        // without doing anything.
        e = new_native
        (
            strdup("onerror"), __LINE__, m_procedure, 
            push
            (
                new_contxt(), 
                new_custom
                (
                    strdup("@onerror"), __LINE__, NULL, 
                    push
                    (
                        new_contxt(),
                        new_native
                        (
                            strdup("select"), __LINE__, m_select,
                            push(push
                            (
                                new_contxt(),
                                new_number(0)
                            ),
                                push
                                (
                                    new_contxt(), 
                                    new_number(0)
                                )
                            ), 
                            NUMBER
                        ) 
                    )
                )
            ),
            DANGLE
        );

        // Add to the root and reparent. 
        if(e)
        {
            append(&contxt->children, e); 
            e->parent = contxt; 
        }

        // Rotate right to make it end up on top. 
        ror(contxt->children);
        
        // Set default variables using (set) instead
        // of creating them directly. Hides all the
        // magic involved in symbol handling.
        e = new_native
        (
            // All the numerical values.
            strdup("set"), __LINE__, m_set, 
            push(push(push(push(push(push(
            push(push(push(push(push(push(
            push(push(push(push(push(push
            (
                new_contxt(), 
                new_symbol(strdup("@user-level"))),
                new_number(2)
                /*
                User level, 0 = novice, 1 = average,
                2 = expert.
                */
            ),
                new_symbol(strdup("@pretend"))),
                new_number(0)
                /*
                Pretend mode, 1 = on, 0 = off.
                */
            ),
                new_symbol(strdup("@installer-version"))),
                new_number((MAJOR << 16) | MINOR)
                /*
                The version of Installer.
                */
            ),
                new_symbol(strdup("@ioerr"))),
                new_number(0)
                /*
                The value of the last DOS error.
                */
            ),
                new_symbol(strdup("@log"))),
                new_number(0)
                /*
                Logging enabled = 1, disabled = 0.
                */
            ),
                new_symbol(strdup("@yes"))),
                /*
                Mock user input. 1 = always yes.
                */
                new_number(0)
            ),
                new_symbol(strdup("@skip"))),
                new_number(0)
                /*
                Mock user input. 1 = always skip.
                */
            ),
                new_symbol(strdup("@abort"))),
                new_number(0)
                /*
                Mock user input. 1 = abort.
                */
            ),
                new_symbol(strdup("@each-type"))),
                new_number(0)
                /*
                When using (foreach), @each-name and @each-type
                will contain the filename and the object type.
                */
            ),
            NUMBER
        );

        // Add to the root and reparent. 
        if(e)
        {
            append(&contxt->children, e); 
            e->parent = contxt; 
        }

        // Rotate right to make it end up on top. 
        // We need these to be set before any user
        // code is executed.
        ror(contxt->children);

        e = new_native
        (
            // All the string values.
            strdup("set"), __LINE__, m_set,
            push(push(push(push(push(push(push(push(
            push(push(push(push(push(push(push(push(
            push(push(push(push(push(push(push(push(
            push(push(push(push(push(push(push(push(
            push(push(push(push(push(push(push(push(
            push(push(push(push(push(push(push(push(
            push(push(push(push(push(push
            (
                new_contxt(), 
                new_symbol(strdup("@abort-button"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@app-name"))),
                new_string(strdup(arg_get(ARG_APPNAME)))
                /*
                The `APPNAME' value given at startup.
                */
            ),
                new_symbol(strdup("@askoptions-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@askchoice-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@asknumber-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@askstring-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@askdisk-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@askfile-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@askdir-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@copylib-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@copyfiles-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@makedir-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@startup-help"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@default-dest"))),
                new_string(strdup("Work:"))
                /*
                Suggested location for installing 
                an application.
                */
            ),
                new_symbol(strdup("@error-msg"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@execute-dir"))),
                new_string(strdup(""))
                /*
                The Installer will change to this directory
                whenever (run) or (execute) are performed.
                */
            ),
                new_symbol(strdup("@icon"))),
                new_string(strdup(arg_get(ARG_SCRIPT)))
                /*
                Installer icon path.
                */
            ),
                new_symbol(strdup("@language"))),
                new_string(strdup("english"))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@special-msg"))),
                new_string(strdup(""))
                /*
                NOT USED.
                */
            ),
                new_symbol(strdup("@log-file"))),
                new_string(strdup("install_log_file"))
                /*
                The default log file.
                */
            ),
                new_symbol(strdup("@each-name"))),
                new_string(strdup(""))
                /*
                When using (foreach), @each-name and
                @each-type will contain the filename
                and the object type.
                */
            ),
                new_symbol(strdup("@user-startup"))),
                new_string(strdup("s:user-startup"))
                /*
                The default file used by (startup).
                */
            ),
                new_symbol(strdup("fail"))),
                new_string(strdup("fail"))
                /*
                Hack to deal with (optional) quirks.
                */
            ),
                new_symbol(strdup("nofail"))),
                new_string(strdup("nofail"))
                /*
                Hack to deal with (optional) quirks.
                */
            ),
                new_symbol(strdup("oknodelete"))),
                new_string(strdup("oknodelete"))
                /*
                Hack to deal with (optional) quirks.
                */
            ),
                new_symbol(strdup("force"))),
                new_string(strdup("force"))
                /*
                Hack to deal with (optional) quirks.
                */
            ),
                new_symbol(strdup("askuser"))),
                new_string(strdup("askuser"))
                /*
                Hack to deal with (optional) quirks.
                */
            ),
            STRING
        );

        // Add to the root and reparent. 
        if(e)
        {
            append(&contxt->children, e); 
            e->parent = contxt; 
        }

        // Rotate right to make it end up on top. 
        // We need these to be set before any user
        // code is executed.
        ror(contxt->children);
       
        // Only on Amiga, otherwise tests will break,
        // they don't expect any default (welcome) or
        // (exit):s.
        #ifdef AMIGA 
        e = NULL; 
        c = contxt->children; 

        // Search for an (exit) in the root.
        while(*c && *c != end())
        {
            // Match function pointer.
            if((*c)->type == NATIVE &&
               (*c)->call == m_exit)
            {
                e = *c; 
                break; 
            }

            c++; 
        }

        // If no (exit) is found insert a default one at the bottom. 
        if(!e)
        {
            // The line numbers and naming are for debugging 
            // purposes only. 
            e = new_native
            (
                strdup("exit"), __LINE__, 
                m_exit, NULL, NUMBER
            );

            // Add to the root and reparent. 
            if(e)
            {
                append(&contxt->children, e); 
                e->parent = contxt; 
            }

            // No rotation. 
        }
        #endif
    }

    return contxt; 
}

