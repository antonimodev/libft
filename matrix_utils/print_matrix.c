/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:08:57 by jortiz-m          #+#    #+#             */
/*   Updated: 2025/07/07 12:09:46 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_matrix(char **matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (matrix[x])
	{
		y = 0;
		printf("[%d]. ", x);
		while (matrix[x][y])
		{
			printf("%c", matrix[x][y]);
			y++;
		}
		printf("\n");
		x++;
	}
}
