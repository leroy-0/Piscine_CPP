//
// Warrior.hh for Project-Master in /home/tekm/tek1/cpp_d09/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 15:39:43 2017 leroy_0
// Last update Thu Jan 12 15:39:43 2017 leroy_0
//

#ifndef __WARRIOR_H_
#define __WARRIOR_H_

#include <iostream>
#include <string>
#include "Character.hh"

class Warrior : virtual public Character
{
	public:
		int 		CloseAttack();
		int 		RangeAttack();

		Warrior(const std::string, int);
		~Warrior();

	protected:
		std::string 	weaponName;
};

#endif