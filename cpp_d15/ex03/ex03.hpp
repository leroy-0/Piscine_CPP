//
// ex03.hpp for Project-Master in /home/tekm/tek1/cpp_d15/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 11:56:47 2017 leroy_0
// Last update Wed Jan 18 11:56:48 2017 leroy_0
//

#ifndef __EX03_HPP_
#define __EX03_HPP_

#include <string>
#include <iostream>

template <typename Type> void 	print(const Type & elem)
{
	std::cout << elem << std::endl;
}

template <typename Type>void 	foreach(const Type *array, void (*func)(const Type & elem), const int size)
{
	for (int i = 0; i < size; ++i)
		(*func)(array[i]);
}

#endif 	/* __EX03_H_ */