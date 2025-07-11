/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:08:16 by jortiz-m          #+#    #+#             */
/*   Updated: 2025/07/07 12:09:46 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**matrix_cpy(char **src, int extra_slots)
{
	char	**matrix;
	int		len;
	int		i;

	len = matrix_len(src) + extra_slots;
	matrix = malloc((len + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (src[i] && i < len)
	{
		matrix[i] = ft_strdup(src[i]);
		if (!matrix[i])
		{
			free_matrix_error(matrix, i);
			return (NULL);
		}
		i++;
	}
	while (i <= len)
		matrix[i++] = NULL;
	return (matrix);
}
