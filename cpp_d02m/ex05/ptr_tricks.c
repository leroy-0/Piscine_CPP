/*
** ptr_tricks.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex05
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 15:03:23 2017 leroy_0
** Last update Thu Jan  5 15:03:26 2017 leroy_0
*/

#include <stdio.h>
#include "ptr_tricks.h"

int	get_array_nb_elem(int *ptr1, int *ptr2)
{
	int *x;
	int j = 0;

	x = ptr1;

	while (x != ptr2)
	{
		j++;
		x++;
	}
	return (j);
}

t_whatever	*get_struct_ptr(int *member_ptr)
{
	t_whatever *real_struct;
    t_whatever	ptr;

    long		x;

    x = (long)&(ptr.member) - (long)&ptr;
    real_struct = (t_whatever*)((long)member_ptr - x);
    return (real_struct);
}