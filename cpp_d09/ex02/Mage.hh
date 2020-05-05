//
// Mage.hh for Project-Master in /home/tekm/tek1/cpp_d09/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 16:29:32 2017 leroy_0
// Last update Thu Jan 12 16:29:32 2017 leroy_0
//

#ifndef 	__MAGE_H_
#define 	__MAGE_H_

#include <iostream>
#include <string>
#include "Character.hh"

class Mage : public Character
{
	public:
		int			CloseAttack();
		int			RangeAttack();
		void		RestorePower();

		Mage(const std::string, int);
		~Mage();
};

#endif		/* __MAGE_H_ */