//
// Sorcerer.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 12:01:39 2017 leroy_0
// Last update Fri Jan 13 12:01:40 2017 leroy_0
//

#include <iostream>
#include <string>
#include "Sorcerer.hh"
#include "Victim.hh"

Sorcerer::Sorcerer(const std::string name, const std::string title)
{
	this->_name = name;
	this->_title = title;

	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string 		Sorcerer::getName() const
{
	return (this->_name);
}

std::string 		Sorcerer::getTitle() const
{
	return (this->_title);
}

void 				Sorcerer::polymorph(const Victim & victim) const
{
	victim.getPolymorphed();
}

std::ostream& 		operator<<(std::ostream & os, const Sorcerer & sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return (os);
}