/*
** menger.c for Project-Master in /home/tekm/tek1/cpp_d01/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 14:00:04 2017 leroy_0
** Last update Wed Jan  4 18:51:03 2017 leroy_0
*/

#include	<stdio.h>

int	menger(int size, int iterations, int y, int x)
{
  int tmp_i = 0;
  int tmp_j = 0;
  
  iterations -= 1;

  if ((size/3) < 100 && (size/3) > 9)
    printf("0%d ", size/3);
  else if ((size/3) > 99)
    printf("%d ", size/3);
  else if ((size/3) < 10)
    printf("00%d ", size/3);

  if ((size/3 + y) < 100 && (size/3 + y) > 9)
    printf("0%d ", y + (size/3));
  else if ((size/3 + y) > 99)
    printf("%d ", y + (size/3));
  else if ((size/3 + y) < 10)
    printf("00%d ", y + (size/3));

  if ((x + (size/3)) < 100 && (x + (size/3)) > 9)
    printf("0%d\n", x + (size/3));
  else if ((x + (size/3)) > 99)
    printf("%d\n", x + (size/3));
  else if ((x + (size/3)) < 10)
    printf("00%d\n", x + (size/3));

  if (iterations == 0)
    return (0);
    
  while (tmp_i < 3)
    {
      while (tmp_j < 3)
	{
	  if (tmp_j != 1 || tmp_i != 1)
	    menger(size / 3, iterations, (tmp_i * (size / 3) + y), (tmp_j * (size / 3) + x));
	  tmp_j++;
	}
      tmp_j = 0;
      tmp_i++;
    }
  return 0;
}
