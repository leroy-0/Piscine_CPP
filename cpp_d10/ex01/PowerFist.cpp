//
// PowerFist.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:08 2017 leroy_0
// Last update Fri Jan 13 13:06:09 2017 leroy_0
//

#include <iostream>
#include <string>
#include "PowerFist.hh"
#include "AWeapon.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist() {}

void 		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}