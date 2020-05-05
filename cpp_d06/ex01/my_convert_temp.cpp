//
// my_convert_temp.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 12:22:46 2017 leroy_0
// Last update Mon Jan  9 12:22:47 2017 leroy_0
//

#include <iostream>
#include <iomanip>
#include <string>

int		main()
{
	float value;
	std::string type;

	std::cin >> value >> type;

	if (type.compare("Celsius")  == 0)
		std::cout << std::setw(16) << std::fixed << std::setprecision(3) << (value * 9/5 + 32) << std::setw(16) << " Fahrenheit" << std::endl;
	else if (type.compare("Fahrenheit") == 0)
		std::cout << std::setw(16) << std::fixed << std::setprecision(3) << (5.0 / 9.0) * (value - 32) << std::setw(16) << " Celsius" << std::endl;
}