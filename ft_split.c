/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:09:34 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/16 19:24:43 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *s, int c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
}

/*idea inicial; bucle contando 'c' caracteres del string,
condicional para recorrerlo hasta 'c' n veces contadas
hacer substring cada vez que encuentra c.*/