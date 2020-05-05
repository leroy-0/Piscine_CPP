//
// ex01.hpp for Project-Master in /home/tekm/tek1/cpp_d15/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 11:24:51 2017 leroy_0
// Last update Wed Jan 18 11:24:51 2017 leroy_0
//

#ifndef __EX01_HPP_
#define __EX01_HPP_

#include <string>
#include <iostream>

template 	<typename Type>int compare(const Type & a, const Type & b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	return (0);
}

#endif 	/* __EX01_HPP_ */