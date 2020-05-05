//
// RadScorpion.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:58 2017 leroy_0
// Last update Fri Jan 13 13:06:58 2017 leroy_0
//

#include <iostream>
#include <string>
#include "RadScorpion.hh"

RadScorpion::RadScorpion() : AEnemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}