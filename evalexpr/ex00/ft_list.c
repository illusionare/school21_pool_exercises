#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void print_ll(t_list *ll)
{
	while (ll)
	{
		printf("[%s]->", ll->str);
		ll = ll->next;
	}
}

t_list	*ft_create_elem(char *data)
{
	t_list *e;

	e = malloc(sizeof(t_list));
	if (e)
	{
		e->str = data;
		e->next = NULL;
	}
	return (e);
}

void	ft_list_push_back(t_list **begin_list, char *data)
{
	t_list *e;

	if (*begin_list)
	{
		e = *begin_list;
		while (e->next)
			e = e->next;
		e->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

int		ft_list_size(t_list *begin_list)
{
	int len;

	len = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		len++;
	}
	return (len);
}
