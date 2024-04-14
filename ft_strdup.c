#include "libft.h"

char	*ft_strdup (const char *s)
{
	size_t	i;
	size_t	strlenght;
	unsigned char	*ptr;

	i = 0;
	strlenght = ft_strlen(s);
	ptr = malloc((strlenght + 1) * sizeof(unsigned char));
	while (i < strlenght)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}