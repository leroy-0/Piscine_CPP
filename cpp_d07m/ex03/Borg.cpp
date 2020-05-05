//
// Borg.cpp for Project-Master in /home/tekm/tek1/cpp_d07m/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 12:07:20 2017 leroy_0
// Last update Tue Jan 10 12:07:20 2017 leroy_0
//

#include <iostream>
#include <string>

#include "Borg.hh"

Borg::Ship::Ship(int weaponFrequency, short repair)
{
	this->_side = 300;
	this->_maxWarp = 9;
	this->_home = UNICOMPLEX;
	this->_location = this->_home;
	this->_core = NULL;
	this->_shield = 100;
	this->_weaponFrequency = weaponFrequency;
	this->_repair = repair;

	std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
	std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
	std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{
	
}

void 		Borg::Ship::setShield(int shield) {
    this->_shield = shield;
}

void 		Borg::Ship::setRepair(short repair) {
    this->_repair = repair;
}

void 		Borg::Ship::setWeaponFrequency(int weaponFrequency) {
    this->_weaponFrequency = weaponFrequency;
}

int 		Borg::Ship::getShield() {
    return this->_shield;
}

short 		Borg::Ship::getRepair() {
    return this->_repair;
}

int 		Borg::Ship::getWeaponFrequency() {
    return this->_weaponFrequency;
}

void		Borg::Ship::fire(Federation::Starfleet::Ship *enemy)
{
	std::cout << "Firing on target with " << this->_weaponFrequency << "GW frequency." << std::endl;
	enemy->_shield -= this->_weaponFrequency;
	if (enemy->_shield < 0)
		enemy->_shield = 0;
}

void		Borg::Ship::fire(Federation::Ship *enemy)
{
	std::cout << "Firing on target with " << this->_weaponFrequency << "GW frequency." << std::endl;
	enemy->_core->_coreReactor->_stability = false;
}

void		Borg::Ship::repair()
{
	if (this->_repair > 0)
	{
		std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
		this->_repair -= 1;
		this->_shield = 100;
	}
	else
		std::cout << "Energy cells depleted, shield weakening." << std::endl;
}

void		Borg::Ship::setupCore(WarpSystem::Core *core)
{
	this->_core = core;
}

void 		Borg::Ship::checkCore()
{
	if (this->_core->_coreReactor->_stability)
		std::cout << "Everything is in order." << std::endl;
	else
		std::cout << "Critical failure imminent." << std::endl;
}

bool		Borg::Ship::move(int warp, Destination d)
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

bool		Borg::Ship::move(int warp)
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

bool		Borg::Ship::move(Destination d)
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

bool		Borg::Ship::move()
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