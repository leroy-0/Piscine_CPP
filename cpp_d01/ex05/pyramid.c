/*
** pyramid.c for Project-Master in /home/tekm/tek1/cpp_d01/ex05
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 17:56:30 2017 leroy_0
** Last update Thu Jan  5 03:17:12 2017 leroy_0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(x, y)  ((x) < (y)) ? (x) : (y)


int	pyramid_path(int size, int **map)
{
  int x = 0;
  int y = 0;
  int total = 0;
  int tmp = 0; 

  while (1)
    {
      if (x == size)
	{
	  total = tmp;
	  break;
	}
      tmp += map[x][y];
      x++;
    }
  printf("%d\n", total);
  return (total);
}
