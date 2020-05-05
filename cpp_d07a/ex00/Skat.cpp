//
// Skat.cpp for Project-Master in /home/tekm/tek1/cpp_d07a/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 16:12:38 2017 leroy_0
// Last update Tue Jan 10 16:12:38 2017 leroy_0
//

#include <iostream>
#include <string>

#include "Skat.h"

Skat::Skat(std::string const& name, int stimPaks) : _name(name)
{
	this->_stimPaks = stimPaks;
}

Skat::~Skat()
{

}

int 				&Skat::stimPaks()
{
	int &tmp = this->_stimPaks;
	return (tmp);
}

const std::string& 	Skat::name()
{
	return (this->_name);
}

void			Skat::shareStimPaks(int number, int& stock)
{
	if (number > this->_stimPaks)
		std::cout << "Don't be greedy" << std::endl;
	else
	{
		this->_stimPaks -= number;
		stock += number;
		std::cout << "Keep the change." << std::endl;
	}
}

void			Skat::addStimPaks(unsigned int number)
{
	if (number == 0)
	{
		std::cout << "Hey boya, did you forget something ?" << std::endl;
	}
	else
		this->_stimPaks += number;
}

void			Skat::useStimPaks()
{
	if (this->_stimPaks > 0)
	{
		std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
		this->_stimPaks -= 1;
	}
	else
	{
		std::cout << "Mediiiiiic" << std::endl;
	}
}

void			Skat::status()
{
	std::cout << "Soldier " << this->_name << " reporting " << this->_stimPaks << " stimpaks remaining sir !" << std::endl;
}