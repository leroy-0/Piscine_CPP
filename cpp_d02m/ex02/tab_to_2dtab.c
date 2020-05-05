/*
** tab_to_2dtab.c for Project-Master in /home/tekm/tek1/cpp_d02m/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 10:50:27 2017 leroy_0
** Last update Thu Jan  5 10:50:28 2017 leroy_0
*/

#include <stdio.h>
#include <stdlib.h>

void	tab_to_2dtab(int *tab, int lenght, int width, int ***res)
{
	int x = 0;
	int j = 0;
	int total = 0;
	int **tmp;

	tmp = malloc(sizeof(int *) * lenght + 1);
	while (x < lenght)
	{
		tmp[x] = malloc(sizeof(int) * width + 1);
		j = 0;
		while (j < width)
		{
			tmp[x][j] = tab[total];
			total++;
			j++;
		}
		x++;
	}
	(*res) = tmp;
}