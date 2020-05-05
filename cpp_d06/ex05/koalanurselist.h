/*
** koalanurselist.h for Project-Master in /home/tekm/tek1/cpp_d06/ex05
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan  9 19:14:06 2017 leroy_0
** Last update Mon Jan  9 19:14:07 2017 leroy_0
*/

#ifndef __KOALANURSELIST_H_
#define __KOALANURSELIST_H_

#include "koalanurse.h"

class KoalaNurseList
{
	public:
		bool				isEnd();
		void				append(KoalaNurseList *);
		KoalaNurse 			*getFromID(int);
		KoalaNurseList 		*remove(KoalaNurseList *);
		KoalaNurseList 		*removeFromID(int);
		void 				dump();

		KoalaNurseList(KoalaNurse *);
		~KoalaNurseList();

	KoalaNurse 			*elem;
	class KoalaNurseList 	*next;
};

#endif 	/* ! __KOALANURSELIST_H_ */