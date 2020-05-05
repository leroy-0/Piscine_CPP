//
// Character.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:07:10 2017 leroy_0
// Last update Fri Jan 13 13:07:10 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Character.hh"
#include "AWeapon.hh"

Character::Character(const std::string name)
{
	this->_ap = 40;
	this->_name = name;
	this->_weapon = NULL;
}

Character::~Character() {}

const std::string& 		Character::getName() const
{
	return (this->_name);
}

int 				Character::getAP() const
{
	return (this->_ap);
}

AWeapon 	*Character::getWeapon() const
{
	return (this->_weapon);
}

void 		Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void 		Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void 		Character::attack(AEnemy *enemy)
{
	if (this->_ap >= this->_weapon->getAPCost())
	{
		std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_ap -= this->_weapon->getAPCost();
		this->getWeapon()->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
			enemy->~AEnemy();
	}
}

std::ostream& 		operator<<(std::ostream & os, const Character & character)
{
	if (character.getWeapon())
		os << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		os << character.getName() << " has " << character.getAP() << " and is unarmed" << std::endl;
	return (os);
}