/*
** FruitBox.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 10:38:43 2017 leroy_0
** Last update Tue Jan 17 13:38:44 2017 leroy_0
*/

#ifndef __FRUITBOX_H_
#define __FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox
{
	public:
		int     	nbFruits() const;
    	bool    	putFruit(Fruit *);
    	Fruit   	*pickFruit();
    	FruitNode 	*head() const;

    	FruitBox(int);
    	virtual ~FruitBox();

	protected:
    	int 		_size;
    	FruitNode 	*_head;
};

#endif	/* __FRUITBOX_H_ */
