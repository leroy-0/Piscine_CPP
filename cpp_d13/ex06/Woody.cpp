//
// Woody.cpp for Project-Master in /home/tekm/tek1/cpp_d13/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan 16 12:16:41 2017 leroy_0
// Last update Mon Jan 16 12:16:42 2017 leroy_0
//

#include <string>
#include <iostream>

#include "Toy.h"
#include "Woody.h"
#include "Picture.h"

Woody::Woody(const std::string & name, const std::string & ascii)
	: Toy(WOODY, name, ascii)
{
	
}

Woody::~Woody() {}

bool 		Woody::speak(const std::string & to_say)
{
	std::cout << "WOODY: ";
	Toy::speak(to_say);
	return (true);
}