#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	int	dstlenght;
	int srclenght;

	srclenght = ft_strlen(src);
	dstlenght = ft_strlen(dst);
	
	return (ft_strlen(dst) + ft_strlen(src));
}
