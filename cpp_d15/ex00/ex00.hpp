//
// ex00.hpp for Project-Master in /home/tekm/tek1/cpp_d15/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 11:09:30 2017 leroy_0
// Last update Wed Jan 18 11:09:30 2017 leroy_0
//

#ifndef __EX00_HPP_
#define __EX00_HPP_

#include <string>
#include <iostream>

template 	<typename Type>void swap(Type & a, Type & b)
{
	Type c;

	c = b;
	b = a;
	a = c;
}

template 	<typename Type>Type add(Type & a, Type & b)
{
	return(a + b);
}

template 	<typename Type>Type min(Type & a, Type & b)
{
	if (a < b)
		return (a);
	return (b);
}

template 	<typename Type>Type max(Type & a, Type & b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif		/* __EX00_HPP_ */