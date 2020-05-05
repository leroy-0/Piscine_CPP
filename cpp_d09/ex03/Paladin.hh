//
// Paladin.hh for Project-Master in /home/tekm/tek1/cpp_d09/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 17:00:34 2017 leroy_0
// Last update Thu Jan 12 17:00:34 2017 leroy_0
//

#ifndef 	__Paladin_H_
#define 	__Paladin_H_

#include <iostream>
#include <string>
#include "Character.hh"
#include "Priest.hh"
#include "Warrior.hh"

class Paladin : public Warrior, public Priest
{
	public:
		void 		Heal();
		int 		RangeAttack();
		int 		CloseAttack();
		void 		RestorePower();
		int 		Intercept();

		Paladin(const std::string, int);
		~Paladin();
};

#endif		/* __Paladin_H_ */