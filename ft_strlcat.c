/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:43:17 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/12 11:43:44 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n <= dstlen)
		return (n + srclen);
	while (i + dstlen < n - 1 && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/* Si n <= dstlen quiere decir que como es menor que el tamaño original de destino,
retorna n + srclen, porque ese sería el hipotético de sumar dstlen + srclen.

En el segundo bucle, la condicion es i + dstlen porque empezamos a contar la i desde el final de dstlen,
le decimos que sea < n - 1 porque n al no ser un índice [], no incluye el 0, y luego - 1 porque
n dice que el ultimo caracter es el caracter nulo para asegurar la funcion. ADEMÁS tenemos en cuenta
que src llegue a nulo. En el momento que cualquiera de las condiciones se rompa, se coloca nulo y se devuelve
la suma de ambos de manera hipotetica*/