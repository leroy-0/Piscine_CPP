/*
** white_rabbit.c for Project-Master in /home/tekm/tek1/cpp_d01/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 10:34:38 2017 leroy_0
** Last update Thu Jan  5 10:18:50 2017 leroy_0
*/

#include <stdlib.h>
#include <stdio.h>

int	follow_the_white_rabbit(void)
{
  int total;
  int rand;

  rand = 0;
  total = 0;

  while (total < 397)
    {
      rand = random() % 37 + 1;
      total += rand;

      if (rand == 1 || rand == 37)
	{
	  printf("LAPIN !!!\n");
	  return (total);
	}
      if (rand == 13 || rand >= 34)
	printf("droite\n");
      else if (rand == 23 || rand == 15 || rand == 10)
	printf("devant\n");
      else if (rand == 24 || ((rand * 3) == 78)
	       || ((rand * 3) == 146) || (rand % 8) == 0)
	printf("derriere\n");
      else if ((rand >= 18 && rand <= 21) || rand == 6 || rand == 17
	       || rand == 28 || rand == 4 || rand == 5)
	printf("gauche\n");
    }
  return (total);
}
