//
// Sorcerer.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 12:01:36 2017 leroy_0
// Last update Fri Jan 13 12:01:36 2017 leroy_0
//

#ifndef 	__SORCERER_H_
#define 	__SORCERER_H_

#include <iostream>
#include <string>
#include "Victim.hh"

class Sorcerer
{
	public:
		std::string 	getName() const;
		std::string 	getTitle() const;

		void 			polymorph(const Victim &) const;

		Sorcerer(const std::string, const std::string);
		~Sorcerer();

	protected:
		std::string 	_name;
		std::string 	_title;
};

std::ostream& 		operator<<(std::ostream & os, const Sorcerer & sorcerer);

#endif		/* __SORCERER_H_ */