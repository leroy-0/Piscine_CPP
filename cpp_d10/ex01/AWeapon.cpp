//
// AWeapon.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:05:48 2017 leroy_0
// Last update Fri Jan 13 13:05:49 2017 leroy_0
//

#include <iostream>
#include <string>
#include "AWeapon.hh"

AWeapon::AWeapon(const std::string name, int apcost, int damage)
{
	this->_name = name;
	this->_cost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon()
{

}

const std::string& 	AWeapon::getName() const
{
	return (this->_name);
}

int 				AWeapon::getAPCost() const
{
	return (this->_cost);
}

int 				AWeapon::getDamage() const
{
	return (this->_damage);
}