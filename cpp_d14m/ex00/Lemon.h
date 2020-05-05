/*
** Lemon.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 10:11:13 2017 leroy_0
** Last update Tue Jan 17 13:39:17 2017 leroy_0
*/

#ifndef __LEMON_H_
#define __LEMON_H_

#include <string>
#include <iostream>
#include "Fruit.h"

class Lemon : virtual public Fruit
{
	public:
    	Lemon();
    	virtual ~Lemon();

	public:
    	virtual std::string getName() const;
};

#endif 	/* __LEMON_H_ */
