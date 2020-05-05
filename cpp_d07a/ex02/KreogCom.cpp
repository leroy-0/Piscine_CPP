//
// KreogCom.cpp for Project-Master in /home/tekm/tek1/cpp_d07a/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 20:03:36 2017 leroy_0
// Last update Tue Jan 10 20:03:36 2017 leroy_0
//

#include <iostream>
#include <string>

#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial) : m_serial(serial)
{
	this->_x = x;
	this->_y = y;
	this->_next = NULL;

	std::cout << "KreogCom " << this->m_serial << " initialised" << std::endl;
}

KreogCom::~KreogCom()
{
	std::cout << "KreogCom " << this->m_serial << " shutting down" << std::endl;
}

void		KreogCom::addCom(int x, int y, int serial)
{
	KreogCom	*to_add = new KreogCom(x, y, serial);
	KreogCom 	*tmp;

	if (this->_next)
	{
		tmp = this->_next;
		to_add->_next = tmp;
		this->_next = to_add;

	}
	else
		this->_next = to_add;
}

KreogCom 	*KreogCom::getCom() const
{
	return (this->_next);
}

void		KreogCom::removeCom()
{
	KreogCom 	*tmp = NULL;

	if (this->_next)
	{
		tmp = this->_next->_next;
		this->_next->~KreogCom();
	}
	this->_next = tmp;
}

void		KreogCom::ping() const
{
	std::cout << "KreogCom " << this->m_serial << " currently at " << this->_x << " " << this->_y << std::endl;
}

void		KreogCom::locateSquad() const
{
	KreogCom 	*tmp;

	tmp = this->_next;
	while (tmp)
	{
		tmp->ping();
		tmp = tmp->_next;
	}
	this->ping();
}