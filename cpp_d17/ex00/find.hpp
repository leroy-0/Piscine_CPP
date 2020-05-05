//
// find.hpp for Project-Master in /home/tekm/tek1/cpp_d17/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 20 10:17:01 2017 leroy_0
// Last update Fri Jan 20 10:17:02 2017 leroy_0
//

#ifndef __FIND_HPP_
#define __FIND_HPP_

#include <string>
#include <algorithm>

template <typename T>
typename T::iterator	do_find(T & container, int to_search)
{
	return (std::find(container.begin(), container.end(), to_search));
}

#endif	/* __FIND_HPP_ */