/*
** sickkoalalist.h for Project-Master in /home/tekm/tek1/cpp_d06/ex05
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan  9 19:14:20 2017 leroy_0
** Last update Mon Jan  9 19:14:20 2017 leroy_0
*/

#ifndef __SICKKOALALIST_H_
#define __SICKKOALALIST_H_

#include "sickkoala.h"

class SickKoalaList
{
	public:
		bool			isEnd();
		void			append(SickKoalaList *);
		SickKoala 		*getFromName(std::string);
		SickKoalaList 	*remove(SickKoalaList *);
		SickKoalaList 	*removeFromName(std::string);
		void 			dump();
		SickKoala 	 	*getContent();
		SickKoalaList 	*getNext();

		SickKoalaList(SickKoala *);
		~SickKoalaList();

	SickKoala 			*elem;
	class SickKoalaList *next;
};

#endif 	/* ! __SICKKOALALIST_H_ */