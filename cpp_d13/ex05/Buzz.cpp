//
// Buzz.cpp for Project-Master in /home/tekm/tek1/cpp_d13/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan 16 12:16:33 2017 leroy_0
// Last update Mon Jan 16 12:16:33 2017 leroy_0
//

#include <string>
#include <iostream>

#include "Toy.h"
#include "Buzz.h"
#include "Picture.h"

Buzz::Buzz(const std::string & name, const std::string & ascii)
	: Toy(BUZZ, name, "buzz.txt")
{
	if (!ascii.empty())
		this->_picture->data = ascii;
}

Buzz::~Buzz() {}

void 		Buzz::speak(const std::string & to_say)
{
	std::cout << "BUZZ: ";
	Toy::speak(to_say);
}

bool 		Buzz::speak_es(const std::string & to_say)
{
	std::cout << "BUZZ: ";
	std::cout << this->getName() << " senorita \""
	<< to_say << "\" senorita" << std::endl;
	return (true);
}