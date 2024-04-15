/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:04:57 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/15 12:05:23 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			i;
	size_t			strlenght;
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
