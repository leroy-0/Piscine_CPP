/*
** add.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex04
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 12:04:44 2017 leroy_0
** Last update Thu Jan  5 12:04:44 2017 leroy_0
*/

#include <stdio.h>
#include "castmania.h"

int normal_add(int a, int b)
{
	return(a + b);
}

int absolute_add(int a, int b)
{
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	return (a + b);
}

void	exec_add(t_add *operation)
{
	if (operation->add_type == NORMAL)
		operation->add_op.res = normal_add(operation->add_op.a, operation->add_op.b);
	else if (operation->add_type == ABSOLUTE)
		operation->add_op.res = absolute_add(operation->add_op.a, operation->add_op.b);
}