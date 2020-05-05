//
// Priest.cpp for Project-Master in /home/tekm/tek1/cpp_d09/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 16:29:39 2017 leroy_0
// Last update Thu Jan 12 16:29:40 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Character.hh"
#include "Mage.hh"
#include "Priest.hh"

Priest::Priest(const std::string name, int Lvl) : Mage(name, Lvl)
{
	this->_Strength = 4;
	this->_Stamina = 4;
	this->_Intelligence = 42;
	this->_Spirit = 21;
	this->_Agility = 2;

	std::cout << this->getName() << " enters in the order" << std::endl;
}

Priest::~Priest()
{

}

void 		Priest::Heal()
{
	if (this->_Power < 10)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return;
	}

	this->_Power -= 10;
	this->_Pv += 70;
	if (this->_Pv > 100)
		this->_Pv = 100;

	std::cout << this->getName() << " casts a little heal spell" << std::endl;
}

int			Priest::CloseAttack()
{
	if (this->_Power < 10)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}

	this->_Power -= 10;
	std::cout << this->getName() << " uses a spirit explosion" << std::endl;

	return (10 + this->_Spirit);
}