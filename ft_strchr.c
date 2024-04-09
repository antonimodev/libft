#include "libft.h"

char    *ft_strchr(const char *str, int chr)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == chr)
            return (char *)(str + i);
        i++;
    }
    return (NULL);
}

/* 
- We've casted the returned pointer because function
request a pointer with char type.
*/