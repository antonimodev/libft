/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:30:19 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/12 15:27:30 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	neg;

	i = 0;
	number = 0;
	neg = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * neg);
}

/* int	main(void)
{
	const char	str[] = " -23-2k1020";

	printf("FT_ATOI; %i\n", ft_atoi(str));
	printf("Función real: %i\n", atoi(str));
} */

/*Si primer caracter es letra, devuelve 0, si encuentra número,
representa números hasta el primer caracter no numérico.
Si los primeros caracteres son espacios, se los salta.
Si se encuentra un primer guión - , lo contempla como signo negativo*/