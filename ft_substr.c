#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = malloc((len + 1) * sizeof(unsigned char));
	while (i < len && s[start] != '\0')
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}