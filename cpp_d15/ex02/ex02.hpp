//
// ex02.hpp for Project-Master in /home/tekm/tek1/cpp_d15/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 11:35:27 2017 leroy_0
// Last update Wed Jan 18 11:35:27 2017 leroy_0
//

#ifndef __EX02_HPP_
#define __EX02_HPP_

#include <string>
#include <iostream>

template <typename Type>Type min(const Type & a, const Type & b)
{
	std::cout << "template min" << std::endl;
	if (a > b)
		return (b);
	return (a);
}

int 		min(int & a, int & b)
{
	std::cout << "non-template min" << std::endl;
	if (a > b)
		return (b);
	return (a);
}

template <typename Type, typename Other>Type 	templateMin(const Type *array, const Other & size)
{
	Type 		tmp = array[0];

	for (int i = 1; (Other)i < size; i++)
		tmp = min(tmp, array[i]);
	return (tmp);
}

int 			nonTemplateMin(int *array, int size)
{
	int 		tmp = array[0];

	for (int i = 1; i < size; i++)
		tmp = min(tmp, array[i]);
	return (tmp);
}

#endif 	/* __EX02_HPP_ */