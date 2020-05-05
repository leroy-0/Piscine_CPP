//
// Priest.hh for Project-Master in /home/tekm/tek1/cpp_d09/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 16:29:43 2017 leroy_0
// Last update Thu Jan 12 16:29:43 2017 leroy_0
//

#ifndef 	__PRIEST_H_
#define 	__PRIEST_H_

#include <iostream>
#include <string>
#include "Mage.hh"
#include "Character.hh"

class Priest : public Mage
{
	public:
		int			CloseAttack();
		void 		Heal();

		Priest(const std::string, int);
		~Priest();
};

#endif		/* __PRIEST_H_ */