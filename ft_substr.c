/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:05 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/15 11:53:58 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = malloc((len + 1) * sizeof(unsigned char));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ptr == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*Las dos excepciones tienen en cuenta que si la posicion
se pasa de la longitud de strlen, devuelve un string
vacío ya que sino cogeríamos memoria fuera de rango.
En el caso de que la reserva de memoria en ptr fuese NULL
devuelve NULL*/