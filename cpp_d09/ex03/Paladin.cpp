//
// Paladin.cpp for Project-Master in /home/tekm/tek1/cpp_d09/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 17:00:36 2017 leroy_0
// Last update Thu Jan 12 17:00:37 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Character.hh"
#include "Paladin.hh"
#include "Priest.hh"
#include "Warrior.hh"

Paladin::Paladin(const std::string name, int Lvl) : Character(name, Lvl), Warrior(name, Lvl), Priest(name, Lvl)
{
	this->_Strength = 9;
	this->_Stamina = 10;
	this->_Intelligence = 10;
	this->_Spirit = 10;
	this->_Agility = 2;

	std::cout << "the light falls on " << this->getName() << std::endl;
}

Paladin::~Paladin()
{

}

void 		Paladin::Heal()
{
	return(Priest::Heal());
}

int 		Paladin::RangeAttack()
{
	return (Priest::RangeAttack());
}

int 		Paladin::CloseAttack()
{
	return (Warrior::CloseAttack());
}

void 		Paladin::RestorePower()
{
	return (Warrior::RestorePower());
}

int 		Paladin::Intercept()
{
	return (Warrior::RangeAttack());
}