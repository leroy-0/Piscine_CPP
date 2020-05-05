//
// Warrior.cpp for Project-Master in /home/tekm/tek1/cpp_d09/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 15:39:40 2017 leroy_0
// Last update Thu Jan 12 15:39:41 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Character.hh"
#include "Warrior.hh"

Warrior::Warrior(const std::string name, int Lvl) : Character(name, Lvl)
{
	this->_Strength = 12;
	this->weaponName = "hammer";
	std::cout << "I'm " << this->getName() << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{

}

int 		Warrior::CloseAttack()
{
	if (this->_Power < 30)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}

	this->_Power -= 30;
	std::cout << this->getName() << " strikes with his " << this->weaponName << std::endl;
	return (20 + this->_Strength);
}

int			Warrior::RangeAttack()
{
	this->Range = CLOSE;

	if (this->_Power < 10)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}
	this->_Power -= 10;
	std::cout << this->getName() << " intercepts" << std::endl;
	return (0);
}