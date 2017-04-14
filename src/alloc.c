#include <stdlib.h>
#include "alloc.h"
#include "builtin.h"

entry_p create_s ()
{
    int default_size = 64; 
    return create_b (default_size); 
}

entry_p create_b (int nargs)
{
    entry_p entry = malloc (sizeof (entry_t)); 
    if (entry)
    {
        entry->value.builtin.args = calloc (nargs + 1, sizeof (entry_p));
        if (entry->value.builtin.args)
        {
            entry->type = NATIVE;
            entry->value.builtin.call = eval;
            entry->value.builtin.args[nargs] = entry; 
            return entry;
        }
    }
    free (entry);
    return 0;
}

entry_p create_num (int n)
{
    entry_p entry = malloc (sizeof (entry_t)); 
    if (entry)
    {
        entry->type = NUMBER;
        entry->value.num = n;
    }
    return entry;
}

void push (entry_p dst, entry_p src)
{
    int free = n_free (dst);
    int used = n_used (dst);

   // printf ("free:%d\n", free); 
   // printf ("used:%d\n", used); 

    if (free)
    {
    }
    else
    {
        /* grow */
    }
    dst->value.builtin.args[used] = 1; 
}

void kill (entry_p entry)
{
    if (entry)
    {
    }
}

int n_true (entry_p entry, int t)
{
    int n = 0; 
    int f = t ? 0 : 1; 

    if (entry->type == NATIVE)
    {
        int i = 0; 
        while (entry->value.builtin.args[i] != entry)
        {
            n += entry->value.builtin.args[i] ? t : f; 
            i++;
        }
    }
    return n;
}

int n_used (entry_p entry)
{
    return n_true (entry, 1); 
}

int n_free (entry_p entry)
{
    return n_true (entry, 0); 
}
