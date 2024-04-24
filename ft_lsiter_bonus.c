#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* Aquí aplicamos f al contenido del nodo
después, asignamos a lst el siguiente nodo
para seguir iterando con la funcion hasta terminar
en NULL.*/