//
// ex04.cpp for Project-Master in /home/tekm/tek1/cpp_d15/ex04
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 12:40:34 2017 leroy_0
// Last update Wed Jan 18 12:40:37 2017 leroy_0
//

#include "ex04.hpp"
#include <string>

template bool equal<int>(const int & a, const int & b);
template bool equal<float>(const float & a, const float & b);
template bool equal<double>(const double & a, const double & b);
template bool equal<std::string>(const std::string & a, const std::string & b);

template <typename T>
bool 	equal(const T & a, const T & b)
{
	if (a == b)
		return(true);
	return (false);
}

template bool Tester<int>::equal(const int & a, const int & b);
template bool Tester<float>::equal(const float & a, const float & b);
template bool Tester<double>::equal(const double & a, const double & b);
template bool Tester<std::string>::equal(const std::string & a, const std::string & b);

template <typename T>
bool 	Tester<T>::equal(const T & a, const T & b)
{
	if (a == b)
		return(true);
	return (false);
}