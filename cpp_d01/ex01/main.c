/*
** main.c for Project-Master in /home/tekm/tek1/cpp_d01/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 13:59:41 2017 leroy_0
** Last update Wed Jan  4 14:03:58 2017 leroy_0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	menger(int size, int iterations, int y, int x);

int	my_neg(char *str, int i)
{
  int	neg_char;

  neg_char = 0;
  i--;
  while ((i >= 0 && (str[i] == '-' || str[i] == '+')))
    {
      if (str[i] == '-')
	neg_char++;
      i--;
    }
  return (neg_char);
}

int	my_getnbr(char *str)
{
  int   i = 0;
  int	res = 0;
  int	neg;

  if (str == NULL)
    return (0);

  while (str[i] && (str[i] < '0' || str[i] > '9'))
    i++;

  neg = my_neg(str, i);

  while (str[i] && (str[i] >= '0' && str[i] <='9'))
    res = res * 10 + (str[i++] - '0');

  if ((neg % 2) == 0)
    return (res);
  else
    return (-res);
}

int	verify_number(char *str)
{
	int x;

	x = 0;

	if (str == NULL || str[0] == '\0')
		return (1);

	while (str && str[x] != '\0')
	{
		if ((str[x] > '9' || str[x] < '0')) {
			return (1);
		}
		x++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	size;
	int	iterations;

	if (argc != 3)
	{
		printf("Usage: ./menger x y\n");
		return (1);
	}
	else
	{
		if (verify_number(argv[1]) == 0 && verify_number(argv[2]) == 0)
		{
			size = my_getnbr(argv[1]);
			iterations = my_getnbr(argv[2]);
			menger(size, iterations, 0, 0);
		}
		else
		{
			printf("Sorry, arguments arent valid ;)\n");
		}
	}
	return (0);
}
