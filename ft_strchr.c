/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:37:41 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/10 10:37:42 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

/* 
- We've casted the returned pointer because function
request a pointer with char type.
*/