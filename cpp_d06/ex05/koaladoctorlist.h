/*
** koaladoctorlist.h for Project-Master in /home/tekm/tek1/cpp_d06/ex05
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan  9 19:14:37 2017 leroy_0
** Last update Mon Jan  9 19:14:38 2017 leroy_0
*/


#ifndef __KOALADOCTORLIST_H_
#define __KOALADOCTORLIST_H_

#include "koaladoctor.h"

class KoalaDoctorList
{
	public:
		bool				isEnd();
		void				append(KoalaDoctorList *);
		KoalaDoctor 		*getFromName(std::string);
		KoalaDoctorList 	*remove(KoalaDoctorList *);
		KoalaDoctorList 	*removeFromName(std::string);
		void 				dump();

		KoalaDoctorList(KoalaDoctor *);
		~KoalaDoctorList();

	KoalaDoctor 			*elem;
	class KoalaDoctorList *next;
};

#endif 	/* ! __KOALADOCTORLIST_H_ */