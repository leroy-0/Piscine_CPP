/*
** koalanurse.h for Project-Master in /home/tekm/tek1/cpp_d06/ex03
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan  9 16:30:30 2017 leroy_0
** Last update Mon Jan  9 16:30:31 2017 leroy_0
*/

#ifndef __KOALANURSE_H_
#define __KOALANURSE_H_

#include "sickkoala.h"

class KoalaNurse
{
	public:
		void 		giveDrug(std::string, SickKoala *);
		std::string 	readReport(std::string);
		void		timeCheck();
		KoalaNurse(unsigned int);
		~KoalaNurse();

	private:
		unsigned int 	id;
		bool			work;
};

#endif 	/* ! __KOALANURSE_H_ */