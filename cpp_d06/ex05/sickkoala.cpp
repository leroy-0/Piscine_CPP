//
// sickkoala.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 14:43:31 2017 leroy_0
// Last update Mon Jan  9 14:43:32 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>

#include "sickkoala.h"

SickKoala::SickKoala(std::string name)
{
	this->name = name;
}

SickKoala::~SickKoala()
{
	std::cout << "Mr. " << this->name << ": Kreooogg!! Je suis gueriiii!" << std::endl;
}

void		SickKoala::poke()
{
	std::cout << "Mr. " << this->name << ": Gooeeeeerrk!! :'(" << std::endl;
}

bool		SickKoala::takeDrug(std::string str)
{
	if (str.compare("Buronzand") == 0)
	{
		std::cout << "Mr. " << this->name << ": Et la fatigue a fait son temps!" << std::endl;
		return (true);
	}

	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	if (str.compare("mars") == 0)
	{
		std::cout << "Mr. " << this->name << ": Mars, et ca kreog!" << std::endl;
		return (true);
	}

	std::cout << "Mr. " << this->name << ": Goerkreog!" << std::endl;
	return (false);
}

void		SickKoala::overDrive(std::string str)
{
	int 	x = 0;
	std::string my_name = "Kreog!";
	std::string my_replace = "1337!";

	while ((x = str.find(my_name, x)) != -1)
		str.replace(x, my_name.size(), my_replace);

	std::cout << "Mr. " << this->name << ": " << str << std::endl;
}

std::string		SickKoala::getName()
{
	return (this->name);
}