#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *lst_temp;

	while (*lst != NULL)
	{
		lst_temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_temp;
	}
	*lst = NULL;
}

/* Importante usar variable temporal para almacenar el enlace
al siguiente nodo. Además hay que utilizar (*lst) para obtener
lo que apunta, en caso contrario obtendríamos el siguiente nodo.

REVISAR DE TODAS FORMAS*/
