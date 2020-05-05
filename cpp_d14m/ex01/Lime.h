/*
** Lime.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 10:07:54 2017 leroy_0
** Last update Tue Jan 17 13:37:58 2017 leroy_0
*/

#ifndef __LIME_H_
#define __LIME_H_

#include <string>
#include <iostream>
#include "Fruit.h"
#include "Lemon.h"

class Lime : virtual public Fruit, virtual public Lemon
{
	public:
		std::string getName() const;

    	Lime();
    	virtual ~Lime();
};

#endif 	/* __LIME_H_ */
