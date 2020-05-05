/*
** mul_div.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 10:23:13 2017 leroy_0
** Last update Thu Jan  5 10:23:15 2017 leroy_0
*/

#include <stdio.h>

void	add_mul_4param(int first, int second, int *add, int *mul)
{
	(*add) = first + second;
	(*mul) = first * second;
}

void	add_mul_2param(int *first, int *second)
{
	int	tmp;

	tmp = (*first);
	(*first) = (*first) + (*second);
	(*second) = tmp * (*second);
}