//
// Victim.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 12:01:49 2017 leroy_0
// Last update Fri Jan 13 12:01:49 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Victim.hh"

Victim::Victim(const std::string name)
{
	this->_name = name;

	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::string 		Victim::getName() const
{
	return (this->_name);
}

void 				Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream& 		operator<<(std::ostream & os, const Victim & victim)
{
	os << "I'm " << victim.getName() << " and i like otters !" << std::endl;
	return (os);
}