//
// AEnemy.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:29 2017 leroy_0
// Last update Fri Jan 13 13:06:29 2017 leroy_0
//

#ifndef __AENEMY_H_
#define __AENEMY_H_

#include <iostream>
#include <string>

class AEnemy
{
	public:
		const std::string&	getType() const;
		int 				getHP() const;

		virtual void 		takeDamage(int);

		AEnemy(int, const std::string);
		virtual ~AEnemy();

	protected:
		int 			_hp;
		std::string 	_type;
};

#endif