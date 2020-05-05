//
// Federation.cpp for Project-Master in /home/tekm/tek1/cpp_d07m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 10:14:11 2017 leroy_0
// Last update Tue Jan 10 10:14:12 2017 leroy_0
//
	
#include <iostream>
#include <string>

#include 	"Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;

	std::cout << "The ship USS " << this->_name << " has been finished. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
	std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{

}

void		Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	std::cout << "USS " << this->_name << ": The core is set." << std::endl;
	this->_core = core;
}

void 		Federation::Starfleet::Ship::checkCore()
{
	std::cout << "USS " << this->_name << ": The core is ";
	if (this->_core->_coreReactor->_stability)
		std::cout << "stable";
	else
		std::cout << "unstable";
	std::cout << " at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;

	std::cout << "The independant ship " << this->_name << " just finished its construction. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{

}

void		Federation::Ship::setupCore(WarpSystem::Core *core)
{
	std::cout << this->_name << ": The core is set." << std::endl;
	this->_core = core;
}

void 		Federation::Ship::checkCore()
{
	std::cout << this->_name << ": The core is ";
	if (this->_core->_coreReactor->_stability)
		std::cout << "stable";
	else
		std::cout << "unstable";
	std::cout << " at the time." << std::endl;
}