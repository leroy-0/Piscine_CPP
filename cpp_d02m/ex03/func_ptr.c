/*
** func_ptr.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex03
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 11:04:46 2017 leroy_0
** Last update Thu Jan  5 11:04:47 2017 leroy_0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func_ptr.h"

void	print_normal(char *str)
{
	printf("%s\n", str);
}

void	print_reverse(char *str)
{
	int x = strlen(str) - 1;

	while (x >= 0)
	{
		printf("%c", str[x]);
		x--;
	}
	printf("\n");
}

void	print_upper(char *str)
{
	int x = 0;

	while (str && str[x] != '\0')
	{
		if (str[x] <= 'z' && str[x] >= 'a')
			printf("%c", str[x] - 32);
		else
			printf("%c", str[x]);
		x++;
	}
	printf("\n");
}

void	print_42(char *str)
{
	(void)str;
	printf("42\n");
}

void	do_action(t_action action, char *str)
{
	int x = 0;
	int nb = 4;

	t_ptr *ptr;

	ptr = malloc(sizeof(t_ptr) * nb);

	ptr[0].built = PRINT_NORMAL;
	ptr[0].fnc = &(print_normal);
	ptr[1].built = PRINT_REVERSE;
	ptr[1].fnc = &(print_reverse);
	ptr[2].built = PRINT_UPPER;
	ptr[2].fnc = &(print_upper);
	ptr[3].built = PRINT_42;
	ptr[3].fnc = &(print_42);

	while (ptr && x < nb && ptr[x].built != action)
		x++;

	ptr[x].fnc(str);
}