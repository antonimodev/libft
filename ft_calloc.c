/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:29:31 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/22 13:14:10 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	size_t			i;
	size_t			bytvalue;
	unsigned char	*ptr;

	i = 0;
	bytvalue = n * size;
	ptr = (unsigned char *) malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	while (i < bytvalue)
	{
		ptr[i] = '0';
		i++;
	}
	return (ptr);
}
