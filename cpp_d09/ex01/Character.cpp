//
// Character.cpp for Project-Master in /home/tekm/tek1/cpp_d09/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 12:41:37 2017 leroy_0
// Last update Thu Jan 12 12:41:38 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Character.hh"

Magician::Magician(const std::string name, int Lvl) : Character(name, Lvl)
{
	this->_Strength = 6;
}

Magician::~Magician()
{

}

Character::Character(const std::string name, int Lvl) : _Pv(100), _Power(100), _Strength(5), _Stamina(5), _Intelligence(5), _Spirit(5), _Agility(5)
{
	this->_name = name;
	this->_Lvl = Lvl;
	this->Range = CLOSE;

	std::cout << this->_name << " Created" << std::endl;
}

Character::~Character()
{

}

const std::string 	&Character::getName() const
{
	return (this->_name);
}

int 				Character::getLvl() 	const
{
	return (this->_Lvl);
}

int 				Character::getPv() 	const
{
	return (this->_Pv);
}

int 				Character::getPower() 	const
{
	return (this->_Power);
}

int			Character::CloseAttack()
{
	if (this->_Power < 10)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}

	this->_Power -= 10;
	std::cout << this->getName() << " strikes with a wood stick" << std::endl;
	return (10 + this->_Strength);
}

int			Character::RangeAttack()
{
	
	if (this->_Power < 10)
	{
		std::cout << this->getName() << " out of power" << std::endl;
		return (0);
	}

	this->_Power -= 10;
	std::cout << this->getName() << " launches a stone" << std::endl;
	return (5 + this->_Strength);
}

void 		Character::Heal()
{
	this->_Pv += 50;
	if (this->_Pv > 100)
		this->_Pv = 100;
	std::cout << this->getName() << " takes a potion" << std::endl;
}

void		Character::RestorePower()
{
	this->_Power = 100;
	std::cout << this->_name << " eats" << std::endl;
}

void		Character::TakeDamage(int _damage)
{
	this->_Pv -= _damage;
	if (this->_Pv <= 0)
	{
		this->_Pv = 0;
		std::cout << this->_name << " out of combat" << std::endl;
	}
	else
		std::cout << this->_name << " takes " << _damage << " damage" << std::endl;
}