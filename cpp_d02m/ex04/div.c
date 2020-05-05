/*
** div.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex04
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 12:04:49 2017 leroy_0
** Last update Thu Jan  5 12:04:49 2017 leroy_0
*/

#include <stdio.h>
#include "castmania.h"

int	integer_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

float	decimal_div(int a, int b)
{
	if (b == 0)
		return (0);
	return ((float)a / b);
}

void	exec_div(t_div *operation)
{
	if (operation->div_type == INTEGER)
		((t_integer_op *)operation->div_op)->res = integer_div(((t_integer_op *)operation->div_op)->a, ((t_integer_op *)operation->div_op)->b);
	else if (operation->div_type == DECIMALE)
		((t_decimale_op *)operation->div_op)->res = decimal_div(((t_decimale_op *)operation->div_op)->a, ((t_decimale_op *)operation->div_op)->b);
}