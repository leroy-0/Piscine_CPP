//
// Victim.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 12:01:46 2017 leroy_0
// Last update Fri Jan 13 12:01:46 2017 leroy_0
//

#ifndef 	__VICTIM_H_
#define 	__VICTIM_H_

#include <iostream>
#include <string>

class Victim
{
	public:
		std::string 	getName() const;

		virtual void 	getPolymorphed() const;

		Victim(const std::string);
		~Victim();

	protected:
		std::string 	_name;
};

std::ostream& 		operator<<(std::ostream & os, const Victim & victim);

#endif		/* __Victim_H_ */