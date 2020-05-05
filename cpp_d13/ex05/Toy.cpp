//
// Toy.cpp for Project-Master in /home/tekm/tek1/piscine_cpp_d13/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan 16 10:05:22 2017 leroy_0
// Last update Mon Jan 16 10:05:22 2017 leroy_0
//

#include <iostream>
#include <string>

#include "Toy.h"

Toy::Toy(const Toy & toy)
{
	this->_error.type = toy._error.type;
	this->_type = toy.getType();
	this->_name = toy.getName();
	this->_picture = new Picture("");
	this->_picture->data = toy.getAscii();
}

Toy::Toy()
{
	this->_error.type = Error::UNKNOWN;
	this->_type = BASIC_TOY;
	this->_name = "toy";
	this->_picture = new Picture;
}

Toy::Toy(ToyType type, const std::string & name, const std::string & filename)
{
	this->_error.type = Error::UNKNOWN;
	this->_type = type;
	this->_name = name;
	this->_picture = new Picture(filename);
}

Toy::~Toy() 
{
	delete this->_picture;
}

Toy& 			Toy::operator=(const Toy & toy)
{
	this->_type = toy.getType();
	this->_name = toy.getName();
	this->_picture->data = toy.getAscii();
	return (*this);
}

Toy::ToyType	Toy::getType() const
{
	return (this->_type);
}

std::string 	Toy::getName() const
{
	return (this->_name);
}

std::string 	Toy::getAscii() const
{
	return (this->_picture->data);
}

void 			Toy::setName(const std::string & name)
{
	this->_name = name;
}

bool 			Toy::setAscii(const std::string & filename)
{
	bool 		value = this->_picture->getPictureFromFile(filename);

	if (value == false)
		this->_error.type = Error::PICTURE;
	return (value);
}

void 			Toy::speak(const std::string & to_say)
{
	std::cout << this->getName() << " \"" << to_say << "\"" << std::endl;
}

std::ostream& 		operator<<(std::ostream & os, const Toy & toy)
{
	os << toy.getName() << std::endl;
	os << toy.getAscii() << std::endl;
	return (os);
}

Toy& 		Toy::operator<<(const std::string & data)
{
	this->_picture->data = data;
	return (*this);
}

bool 		Toy::speak_es(const std::string & data)
{
	(void)data;
	this->_error.type = Error::SPEAK;
	return (false);
}

const std::string & Toy::Error::what() const
{
	std::string 	*errorName = new std::string("");

	if (this->type == Error::SPEAK)
		errorName = new std::string("wrong mode");
	else if (this->type == Error::PICTURE)
		errorName = new std::string("bad new illustration");

	return (*errorName);
}

const std::string & Toy::Error::where() const
{
	std::string 	*errorName = new std::string("");

	if (this->type == SPEAK)
		errorName = new std::string("speak_es");
	else if (this->type == PICTURE)
		errorName = new std::string("setAscii");
	
	return (*errorName);
}

Toy::Error& 		Toy::getLastError()
{	
	return (this->_error);
}