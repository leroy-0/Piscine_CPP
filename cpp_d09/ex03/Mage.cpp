//
// Mage.cpp for Project-Master in /home/tekm/tek1/cpp_d09/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 16:29:29 2017 leroy_0
// Last update Thu Jan 12 16:29:29 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Character.hh"
#include "Mage.hh"

Mage::Mage(const std::string name, int Lvl) : Character(name, Lvl)
{
	this->_Strength = 6;
	this->_Stamina = 6;
	this->_Intelligence = 12;
	this->_Spirit = 11;
	this->_Agility = 7;

	std::cout << this->getName() << " teleported" << std::endl;
}

Mage::~Mage()
{

}

int			Mage::CloseAttack()
{
	if (this->_Power < 10)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}

	this->_Power -= 10;
	std::cout << this->getName() << " blinks" << std::endl;

	this->Range = RANGE;
	return (0);
}

int			Mage::RangeAttack()
{
	if (this->_Power < 25)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}

	this->_Power -= 25;
	std::cout << this->getName() << " launches a fire ball" << std::endl;
	return (20 + this->_Spirit);
}

void		Mage::RestorePower()
{
	this->_Power += (50 + this->_Intelligence);
	if (this->_Power > 100)
		this->_Power = 100;
	std::cout << this->_name << " takes a mana potion" << std::endl;
}