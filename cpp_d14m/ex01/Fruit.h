/*
** Fruit.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 10:08:15 2017 leroy_0
** Last update Tue Jan 17 13:38:16 2017 leroy_0
*/

#ifndef __FRUIT_H_
#define __FRUIT_H_

#include <string>
#include <iostream>

class Fruit
{
	public:
		virtual std::string  		getName() const;
   		int                 		getVitamins() const;

    	Fruit(const std::string & name = "", int vitamins = 0);
    	virtual ~Fruit();

    protected:
    	std::string 	_name;
   		int         	_vitamins;
};

#endif	/* __FRUIT_H_ */
