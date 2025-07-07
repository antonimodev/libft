/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:08:37 by jortiz-m          #+#    #+#             */
/*   Updated: 2025/07/07 12:09:46 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	matrix_replace(char **matrix, int index, char *new_value)
{
	free(matrix[index]);
	matrix[index] = ft_strdup(new_value);
}
