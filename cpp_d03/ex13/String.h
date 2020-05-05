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
	char 			*str;
	void 			(*assign_s)(struct String *this, struct String const *str);
	void 			(*assign_c)(struct String *this, char const *str);
	void 			(*append_s)(struct String *this, struct String const *ap);
	void 			(*append_c)(struct String *this, char const *aps);
	char			(*at)(struct String *this, size_t pos);
	void 			(*clear)(struct String *this);
	int 			(*size)(struct String *this);
	int 			(*compare_s)(struct String *this, const struct String *str);
	int 			(*compare_c)(struct String *this, char const *str);
	size_t 			(*copy)(struct String *this, char *s, size_t n, size_t pos);
	char const* 	(*c_str)(struct String *this);
	int 			(*empty)(struct String *this);
	int 			(*find_s)(struct String *this, const struct String *str, size_t pos);
	int 			(*find_c)(struct String *this, char const *str, size_t pos);
	void 			(*insert_c)(struct String *this, size_t pos, char const *str);
	void 			(*insert_s)(struct String *this, size_t pos, struct String const *str);
	int 			(*to_int)(struct String *this);
	struct String* 	(*split_s)(struct String *this, char separator);
	char** 			(*split_c)(struct String *this, char separator);
}					String;

void	StringInit(struct String *this, char const *s);
void	StringDestroy(struct String *this);

#endif