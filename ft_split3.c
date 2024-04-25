/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:09:34 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/25 11:04:57 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char *s, int c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s == NULL)
		return (0);
	if (s[0] != c)
		words++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			words++;
		i++;
	}
	return (words);
}

static char	**ft_memmatrix(char *s, char c)
{
	char	**str;

	str = malloc ((ft_countwords(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**str;

	i = 0;
	j = 0;
	start = 0;
	str = ft_memmatrix((char *)s, c);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str[j] = ft_substr(s, start, i - start);
			start = i + 1;
			j++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

/*En un array de punteros reservamos un espacio más
para que finalice el array.

DEJO ESTO ASÍ PENDIENTE DE SI ESTÁ BIEN O NO,
NO CONTEMPLO MEMORIA*/