//
// Peon.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 12:01:55 2017 leroy_0
// Last update Fri Jan 13 12:01:55 2017 leroy_0
//

#ifndef 	__PEON_H_
#define 	__PEON_H_

#include <iostream>
#include <string>
#include "Victim.hh"

class Peon : virtual public Victim
{
	public:
		void 	getPolymorphed() const;

		Peon(const std::string);
		~Peon();
};

#endif 		/* __PEON_H_ */