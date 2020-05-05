/*
** simple_list.c for Project-Master in /home/tekm/tek1/cpp_d02a/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 16:54:12 2017 leroy_0
** Last update Thu Jan  5 16:54:12 2017 leroy_0
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "generic_list.h"

unsigned int list_get_size(t_list list)
{
	t_list 	tmp = list;
	int 	x = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		x++;
	}
	return (x);
}

t_bool 	list_is_empty(t_list list)
{
	if (list == NULL)
		return (TRUE);
	else
		return (FALSE);
}

void 	list_dump(t_list list, t_value_displayer val_disp)
{
	t_list 	tmp = list;

	while (tmp != NULL)
	{
		val_disp(tmp->value);
		tmp = tmp->next;
	}
}

t_bool	list_add_elem_at_front(t_list *front_ptr, void *elem)
{
	t_list tmp;

	if (front_ptr == NULL)
	{
		if ((front_ptr = malloc(sizeof(t_node))) == NULL)
			return(FALSE);
	}

	if ((tmp = malloc(sizeof(t_node))) != NULL)
	{
		tmp->value = elem;
		tmp->next = *front_ptr;
		*front_ptr = tmp;
		return (TRUE);
	}
	return (FALSE);
}

t_bool 	list_add_elem_at_back(t_list *front_ptr, void *elem)
{
	t_list tmp;
	t_list tmp2 = *front_ptr;

	if (*front_ptr == NULL)
		return(list_add_elem_at_front(front_ptr, elem));

	if (front_ptr == NULL)
	{
		if ((front_ptr = malloc(sizeof(t_node))) == NULL)
			return(FALSE);
	}

	if ((tmp = malloc(sizeof(t_node))) != NULL)
	{
		while (tmp2 && tmp2->next != NULL)
			tmp2 = tmp2->next;

		tmp->value = elem;
		tmp->next = NULL;

		tmp2->next = tmp;
		return (TRUE);
	}
	return (FALSE);
}

t_bool 	list_add_elem_at_position(t_list *front_ptr, void *elem, unsigned int position)
{
	t_list tmp;
	t_list tmp2 = *front_ptr;
	t_list tmp3 = *front_ptr;

	unsigned int 	x = 0;

	if (*front_ptr == NULL || position == 0)
		return(list_add_elem_at_front(front_ptr, elem));

	if (front_ptr == NULL)
	{
		if ((front_ptr = malloc(sizeof(t_node))) == NULL)
			return(FALSE);
	}

	if ((tmp = malloc(sizeof(t_node))) != NULL)
	{
		while (tmp2 && tmp2->next != NULL && x < position)
		{
			tmp3 = tmp2;
			tmp2 = tmp2->next;
			x++;
		}

		if (x != position)
			return(FALSE);

		tmp->value = elem;
		tmp->next = tmp2;
		tmp3->next = tmp;

		return (TRUE);
	}
	return (FALSE);
}

t_bool	list_del_elem_at_front(t_list *front_ptr)
{
	if (*front_ptr == NULL)
		return(FALSE);

	(*front_ptr) = (*front_ptr)->next;

	return(TRUE);
}

t_bool 	list_del_elem_at_back(t_list *front_ptr)
{
	t_list	tmp = *front_ptr;

	if (*front_ptr == NULL)
		return(FALSE);

	while (tmp && tmp->next != NULL && tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;

	return (TRUE);
}

t_bool 	list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
	t_list tmp2 = *front_ptr;
	t_list tmp3 = *front_ptr;

	unsigned int 	x = 0;

	if (*front_ptr == NULL || position == 0)
		return(list_del_elem_at_front(front_ptr));

	if (front_ptr == NULL)
		return (FALSE);

	while (tmp2 && tmp2->next != NULL && x < position)
	{
		tmp3 = tmp2;
		tmp2 = tmp2->next;
		x++;
	}

	if (x != position)
		return(FALSE);

	tmp3->next = tmp2->next;

	return (TRUE);
}

void	*list_get_elem_at_front(t_list list)
{
	if (list != NULL)
		return (list->value);
	return (0);
}

void	*list_get_elem_at_back(t_list list)
{
	t_list 	tmp = list;

	if (list == NULL)
		return (0);
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	return (tmp->value);
}

void	*list_get_elem_at_position(t_list list, unsigned int position)
{
	t_list 			tmp = list;
	unsigned int 	x = 0;

	if (position == 0 || list == NULL)
		return (list_get_elem_at_front(list));

	while (tmp && x < position)
	{
		tmp = tmp->next;
		x++;
	}

	if (x != position)
		return (0);

	return (tmp->value);
}

t_node 	*list_get_first_node_with_value(t_list list, void *value, t_value_comparator val_comp)
{
	t_list 	tmp = list;

	if (list == NULL)
		return (NULL);
	while (tmp && (val_comp(value, tmp->value) != 0))
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}

void    list_clear(t_list *list)
{
    t_list *tmp;

    if (*list)
    	return;
    
    while ((*list))
    {
        *tmp = *list;
        (*list) = (*list)->next;
        free(*tmp);
    }
}