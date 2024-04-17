/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:22:19 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/16 15:56:19 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
/**
 * @brief Identify if the given value is a digit.
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);
/**
 * @brief Identify if the given value is an alphabetic character.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);
/**
 * @brief String lenght.
 * 
 * @param s 
 * @return size_t 
 */
size_t	ft_strlen(const char *s);
/**
 * @brief Allocate a copy of string "s" using malloc and gives a pointer to it.
 * 
 * @param s 
 * @return char* 
 */
char	*ft_strdup(const char *s);
/**
 * @brief Search a chr into string and return pointer to located character.
 * 
 * @param str 
 * @param chr 
 * @return char* 
 */
char	*ft_strchr(const char *str, int chr);
/**
 * @brief Search a chr into string and return pointer to located character.
 * Same as ft_strchr but start from end (REVERSED).
 * @param str 
 * @param chr 
 * @return char* 
 */
char	*ft_strrchr(const char *str, int chr);
/**
 * @brief Copy string from "start" to the "end", keeping it safe with NULL
 * terminated character.
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif