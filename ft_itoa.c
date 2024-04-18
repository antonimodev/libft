/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:56:44 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/18 10:57:52 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countdigits(int n)
{
	int	nlen;

	nlen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		nlen ++;
	}
	return (nlen);
}

static	char	*ft_memdigits(int n)
{
	char	*str;

	str = malloc ((ft_countdigits(n) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);
}

static	char	*ft_reversestring(char *str)
{
	char	*rstr;
	int		i;
	int		j;
	int		strlen;

	rstr = malloc ((ft_strlen(str) + 1) * sizeof(char));
	if (rstr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	strlen = ft_strlen(str);
	while (i < ft_strlen(str))
	{
		rstr[j] = str[strlen - 1];
		j++;
		strlen--;
		i++;
	}
	rstr[j] = '\0';
	return (rstr);
}

char	*ft_itoa(int n)
{
	int		i;
	int		digits;
	char	*str;

	i = 0;
	digits = ft_countdigits(n);
	str = ft_memdigits(n);
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (i < digits)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (ft_reversestring(str));
}
