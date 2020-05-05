//
// KoalaBot.cpp for Project-Master in /home/tekm/tek1/cpp_d07a/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 18:58:25 2017 leroy_0
// Last update Tue Jan 10 18:58:25 2017 leroy_0
//

#include    <string>
#include	<typeinfo>
#include	<iostream>

#include    "KoalaBot.h"

KoalaBot::KoalaBot()
{
	this->_serial = "Bob-01";
}

KoalaBot::~KoalaBot()
{

}

void		KoalaBot::setParts(const Arms &_arms)
{
	this->_arms = _arms;
}

void		KoalaBot::setParts(const Legs &_legs)
{
	this->_legs = _legs;
}

void		KoalaBot::setParts(const Head &_head)
{
	this->_head = _head;
}

void		KoalaBot::swapParts(Arms &_arms)
{
	Arms 	tmp;

	tmp = this->_arms;
	this->_arms = _arms;
	_arms = tmp;
}

void		KoalaBot::swapParts(Legs &_legs)
{
	Legs	tmp;

	tmp = this->_legs;
	this->_legs = _legs;
	_legs = tmp;
}

void		KoalaBot::swapParts(Head &_head)
{
	Head 	tmp;

	tmp = this->_head;
	this->_head = _head;
	_head = tmp;
}

void		KoalaBot::informations() const
{
	std::cout << "[KoalaBot] " << this->_serial << std::endl;
	this->_arms.informations();
	this->_legs.informations();
	this->_head.informations();
}

bool		KoalaBot::status() const
{
	if (this->_arms.isFunctionnal() && this->_legs.isFunctionnal() && this->_head.isFunctionnal())
		return (true);
	return (false);
}