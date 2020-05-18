// this is a function
#include <stdio.h>

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    // need <stdio.h>
    ret_val = fgets(st, n, stdin);
    if (ret_val) // i.e., ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have st[i] == '\0'
            while (getchar != '\n')
                continue;
    }

    return ret_val;
}