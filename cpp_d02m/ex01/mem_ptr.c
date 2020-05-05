/*
** mem_ptr.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 10:31:23 2017 leroy_0
** Last update Thu Jan  5 10:31:24 2017 leroy_0
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mem_ptr.h"

void	add_str(char *str1, char *str2, char **res)
{
	char *str;

	str = malloc(sizeof(char) * strlen(str1) + strlen(str2) + 1);
	str[0] = '\0';
	str = strcat(str, str1);
	str = strcat(str, str2);

	(*res) = str;
}

void	add_str_struct(t_str_op *str_op)
{
	add_str(str_op->str1, str_op->str2, &str_op->res);
}