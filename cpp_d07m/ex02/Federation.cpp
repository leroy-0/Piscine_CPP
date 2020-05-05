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

Federation::Ship::Ship(int length, int width, std::string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_home = VULCAN;
	this->_location = this->_home;
	this->_core = NULL;
	this->_maxWarp = 1;

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

bool		Federation::Ship::move(int warp, Destination d)
{
	bool	value;

	if (warp <= this->_maxWarp && d != this->_location && this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = d;

	return (value);
}

bool		Federation::Ship::move(int warp)
{
	bool	value;

	if (warp <= this->_maxWarp && this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = this->_home;

	return (value);
}

bool		Federation::Ship::move(Destination d)
{
	bool	value;

	if (d != this->_location && this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = d;

	return (value);
}

bool		Federation::Ship::move()
{
	bool	value;

	if (this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = this->_home;

	return (value);
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;
	this->_home = EARTH;
	this->_location = this->_home;
	this->_core = NULL;

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

void		Federation::Starfleet::Ship::promote(Captain *captain)
{
	std::cout << captain->_name << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
	this->_captain = captain;
}

bool		Federation::Starfleet::Ship::move(int warp, Destination d)
{
	bool	value;

	if (warp <= this->_maxWarp && d != this->_location && this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = d;

	return (value);
}

bool		Federation::Starfleet::Ship::move(int warp)
{
	bool	value;

	if (warp <= this->_maxWarp && this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = this->_home;

	return (value);
}

bool		Federation::Starfleet::Ship::move(Destination d)
{
	bool	value;

	if (d != this->_location && this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = d;

	return (value);
}

bool		Federation::Starfleet::Ship::move()
{
	bool	value;

	if (this->_core && this->_core->_coreReactor->_stability)
		value = true;
	else
		value = false;

	if (value)
		this->_location = this->_home;

	return (value);
}

Federation::Starfleet::Captain::Captain(std::string name)
{
	this->_name = name;
}

Federation::Starfleet::Captain::~Captain()
{

}

std::string 	Federation::Starfleet::Captain::getName()
{
	return (this->_name);
}

int 			Federation::Starfleet::Captain::getAge()
{
	return (this->_age);
}

void		Federation::Starfleet::Captain::setAge(int age)
{
	this->_age = age;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
	this->_name = name;

	std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{

}