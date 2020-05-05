/*
** String.h for Project-Master in /home/tekm/tek1/cpp_d03/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Fri Jan  6 10:22:30 2017 leroy_0
** Last update Fri Jan  6 10:22:31 2017 leroy_0
*/

#ifndef _STRING_H_
#define _STRING_H_

typedef struct 		String
{
	char 	*str;
	void 	(*assign_s)(struct String *this, struct String const *str);
	void 	(*assign_c)(struct String *this, char const *str);
	void 	(*append_s)(struct String *this, struct String const *ap);
	void 	(*append_c)(struct String *this, char const *aps);
}					String;

void	StringInit(struct String *this, char const *s);
void	StringDestroy(struct String *this);

#endif