//
// Peon.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 12:01:59 2017 leroy_0
// Last update Fri Jan 13 12:01:59 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Peon.hh"
#include "Victim.hh"

Peon::Peon(const std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void 		Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}