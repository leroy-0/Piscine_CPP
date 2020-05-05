//
// AEnemy.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:24 2017 leroy_0
// Last update Fri Jan 13 13:06:24 2017 leroy_0
//

#include <iostream>
#include <string>
#include "AEnemy.hh"

AEnemy::AEnemy(int hp, const std::string type)
{
	this->_hp = hp;
	this->_type = type;
}

AEnemy::~AEnemy()
{

}

void				AEnemy::takeDamage(int dmg)
{
	if (dmg > 0)
		this->_hp -= dmg;
}

const std::string&	AEnemy::getType() const
{
	return (this->_type);
}

int 				AEnemy::getHP() const
{
	return (this->_hp);
}