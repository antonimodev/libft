/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:22:19 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/10 11:29:50 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
/**
 * @brief Identify if the given value is a digit
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);
/**
 * @brief Identify if the given value is an alphabetic character
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);
/**
 * @brief String lenght
 * 
 * @param s 
 * @return size_t 
 */
size_t	ft_strlen(const char *s);

#endif