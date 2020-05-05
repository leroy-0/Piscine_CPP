//
// ToyStory.cpp for Project-Master in /home/tekm/tek1/cpp_d13/ex06
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan 16 15:30:55 2017 leroy_0
// Last update Mon Jan 16 15:30:55 2017 leroy_0
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "ToyStory.h"

ToyStory::ToyStory()
{

}

ToyStory::~ToyStory()
{

}

bool 		ToyStory::tellMeAStory(const std::string & filename, Toy & toy1, speak_story fnc1, Toy & toy2, speak_story fnc2)
{
	int 	x = 1;

	if (toy1.getAscii().compare("ERROR") == 0)
	{
		Toy::Error e = toy1.getLastError();
		std::cout << e.where() << ": " << e.what() << std::endl;
		return (false);
	}
	std::cout << toy1.getAscii() << std::endl;
	if (toy2.getAscii().compare("ERROR") == 0)
	{
		Toy::Error e = toy2.getLastError();
		std::cout << e.where() << ": " << e.what() << std::endl;
		return (false);
	}
	std::cout << toy2.getAscii() << std::endl;

	std::string word;
	std::ifstream content(filename.c_str());

	if (!content)
	{
		std::cout << "Bad Story" << std::endl;
		return (false);
	}
	
	while (content >> word)
	{
		if (word.find("picture:") != std::string::npos)
		{
			word = word.substr(8);
			if (x % 2 == 0)
			{
				if (!toy2.setAscii(word))
				{
					Toy::Error e = toy2.getLastError();
					std::cout << e.where() << ": " << e.what() << std::endl;
					return (false);
				}
				if (toy2.getAscii().compare("ERROR") == 0)
				{
					Toy::Error e = toy2.getLastError();
					std::cout << e.where() << ": " << e.what() << std::endl;
					return (false);
				}
				std::cout << toy2.getAscii() << std::endl;
			}
			else
			{
				if (!toy1.setAscii(word))
				{
					Toy::Error e = toy1.getLastError();
					std::cout << e.where() << ": " << e.what() << std::endl;
					return (false);
				}
				if (toy1.getAscii().compare("ERROR") == 0)
				{
					Toy::Error e = toy1.getLastError();
					std::cout << e.where() << ": " << e.what() << std::endl;
					return (false);
				}
				std::cout << toy1.getAscii() << std::endl;
			}
		}
		if (x % 2 == 0)
		{
			if (!(toy2.*fnc2)(word))
			{
				Toy::Error e = toy2.getLastError();
				std::cout << e.where() << ": " << e.what() << std::endl;
				return (false);
			}
		}
		else
		{
			if (!(toy1.*fnc1)(word))
			{
				Toy::Error e = toy1.getLastError();
				std::cout << e.where() << ": " << e.what() << std::endl;
				return (false);
			}
		}
		x++;
	}
	return (true);
}