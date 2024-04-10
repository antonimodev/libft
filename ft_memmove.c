/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:06:30 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/10 19:16:32 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	int					j;
	const unsigned char	*ptr1;
	unsigned char		*ptr2;

	ptr1 = src;
	ptr2 = dst;
	i = 0;
	if (ptr1 > ptr2)
	{
		while (i < n)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	j = (int)n;
	while (j >= 0 && ptr1 < ptr2)
	{
		ptr2[j] = ptr1[j];
		j--;
	}
	return (dst);
} */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	unsigned char		*ptr2;

	ptr1 = src;
	ptr2 = dst;
	i = 0;
	if (ptr1 < ptr2)
	{
		while (n > 0)
		{
			ptr2[n] = ptr1[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	return (dst);
}
