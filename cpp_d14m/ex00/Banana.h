/*
** Banana.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 10:07:54 2017 leroy_0
** Last update Tue Jan 17 13:37:58 2017 leroy_0
*/

#ifndef __BANANA_H_
#define __BANANA_H_

#include <string>
#include <iostream>
#include "Fruit.h"

class Banana : virtual public Fruit
{
	public:
		std::string getName() const;

    	Banana();
    	virtual ~Banana();
};

#endif 	/* __BANANA_H_ */
