//
// ex06.hpp for Project-Master in /home/tekm/tek1/cpp_d15/ex06
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 16:03:10 2017 leroy_0
// Last update Wed Jan 18 16:03:10 2017 leroy_0
//

#include <string>
#include <iostream>
#include <sstream>

template <typename T>
std::string 		my_type(T)
{
	std::stringstream 	str;

	str << "[???]";
	return (str.str());
}

std::string 		my_type(int a)
{
	std::stringstream 	str;

	str << "[int:" << a << "]";
	return (str.str());
}

std::string 		my_type(float a)
{
	std::stringstream 	str;

	str << "[float:" << a << "f]";
	return (str.str());
}

std::string 		my_type(std::string a)
{
	std::stringstream 	str;

	str << "[string:\"" << a << "\"]";
	return (str.str());
}

template <typename T, typename U = T>
struct 				Tuple
{
	T 				a;
	U 				b;
	std::string 	toString() const
	{
		return ("[TUPLE " + my_type(a) + " " + my_type(b) + "]");
	}
};