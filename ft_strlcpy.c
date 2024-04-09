/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:48:27 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/09 17:52:02 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclenght;
	int		i;

	srclenght = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclenght);
}

/* int	main(void)
{
	char	str[20];
	char	str2[20];

	printf("Resultado de mi funcion; %lu.\n", ft_strlcpy(str,"hola", 3));
	printf("Resultado de mi funcion; %lu.\n", strlcpy(str2,"hola", 3));
	printf("Mi función es: %s.\n", str);
	printf("Mi función es: %s.\n", str2);
} */
