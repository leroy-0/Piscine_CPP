/*
** built_in.h for Project-Master in /home/tekm/tek1/cpp_d01/ex06
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 16:49:37 2017 leroy_0
** Last update Wed Jan  4 16:52:35 2017 leroy_0
*/

#ifndef		EX_6_H_
# define	EX_6_H_

typedef union	s_foo
{
	int		bar;
	struct	u_foo2
	{
		short int		foo;
		union			u_bar2
		{
			short int		foo;
			short int		bar;
		} bar;
	} foo;
}	t_foo;

#endif          /* !BUILT_IN_H_ */ 
