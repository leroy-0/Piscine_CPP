/*
** koaladoctor.h for Project-Master in /home/tekm/tek1/cpp_d06/ex04
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan  9 18:23:15 2017 leroy_0
** Last update Mon Jan  9 18:23:15 2017 leroy_0
*/

#ifndef __KOALADOCTOR_H_
#define __KOALADOCTOR_H_

#include "sickkoala.h"
#include "koalanurse.h"

class KoalaDoctor
{
	public:
		void	timeCheck();
		void 	diagnose(SickKoala *);
		KoalaDoctor(std::string);
		~KoalaDoctor();
	private:
		std::string name;
		bool		work;
};

#endif 	/* ! __KOALADOCTOR_H_ */