//
// Parts.cpp for Project-Master in /home/tekm/tek1/cpp_d07a/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 18:28:47 2017 leroy_0
// Last update Tue Jan 10 18:28:47 2017 leroy_0
//

#include    <string>
#include	<typeinfo>
#include	<iostream>

#include    "Parts.h"

Arms::Arms(std::string const & serial, bool functionnal) : _serial(serial)
{
	this->_functionnal = functionnal;
	this->_className = "Arms";
}

Arms::~Arms()
{
	(void)(this);
}

bool    Arms::isFunctionnal() const
{
	return (this->_functionnal);
}

std::string     Arms::serial() const
{
	return (this->_serial);
}

void    Arms::informations() const
{
	std::cout << "\t[Parts] " << this->_className << " " << this->_serial << " status : ";
	if (this->_functionnal)
		std::cout << "OK";
    else
    	std::cout << "KO";
    std::cout << std::endl;
}

Legs::Legs(std::string const & serial, bool functionnal) : _serial(serial)
{
	this->_functionnal = functionnal;
	this->_className = "Legs";
}

Legs::~Legs()
{
	(void)(this);
}

bool    Legs::isFunctionnal() const
{
	return (this->_functionnal);
}

std::string     Legs::serial() const
{
	return (this->_serial);
}

void    Legs::informations() const
{
	std::cout << "\t[Parts] " << this->_className << " " << this->_serial << " status : ";
	if (this->_functionnal)
		std::cout << "OK";
    else
    	std::cout << "KO";
    std::cout << std::endl;
}

Head::Head(std::string const & serial, bool functionnal) : _serial(serial)
{
	this->_functionnal = functionnal;
	this->_className = "Head";
}

Head::~Head()
{
	(void)(this);
}

bool    Head::isFunctionnal() const
{
	return (this->_functionnal);
}

std::string     Head::serial() const
{
	return (this->_serial);
}

void    Head::informations() const
{
	std::cout << "\t[Parts] " << this->_className << " " << this->_serial << " status : ";
	if (this->_functionnal)
		std::cout << "OK";
    else
    	std::cout << "KO";
    std::cout << std::endl;
}