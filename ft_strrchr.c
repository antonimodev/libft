#include "libft.h"

char    *ft_strrchr(const char *str, int chr)
{
    int strlenght;

    strlenght = ft_strlen(str);
    while (strlenght >= 0)
    {
        if (str[strlenght] == chr)
            return (char *)(str + strlenght);
        strlenght --;
    }
    return (NULL);
}

/* 
- We've casted the returned pointer because function
request a pointer with char type.
*/