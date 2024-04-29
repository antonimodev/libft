/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:10:01 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/29 15:20:57 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (lst == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_element = ft_lstnew(f(lst->content));
		if (new_element == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}

/*lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada en la iteración de cada
elemento de la lista. 
del: un puntero a función utilizado para eliminar el contenido de un nodo,
si es necesario.

Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. 
Crea una lista resultante de la aplicación correcta y sucesiva 
de la función ’f’ sobre cada nodo. 
La función ’del’ se utiliza para eliminar el contenido de un nodo,
si hace falta.*/