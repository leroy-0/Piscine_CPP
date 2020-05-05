//
// LittleHand.cpp for Project-Master in /home/tekm/tek1/cpp_d14m/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 17 14:32:24 2017 leroy_0
// Last update Tue Jan 17 14:32:24 2017 leroy_0
//

#include "Lime.h"
#include "Fruit.h"
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"
#include "FruitNode.h"
#include "LittleHand.h"

LittleHand::LittleHand()
{

}

LittleHand::~LittleHand() {}

void 			LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes)
{
	FruitNode 	*tmp = unsorted.head();
	Fruit 		tmp_fruit;

	while (tmp)
	{
		if (tmp->_elem)
		{
			if (tmp->_elem->getName().compare("lime") == 0 && limes.putFruit(tmp->_elem))
			{}
			else if (tmp->_elem->getName().compare("lemon") == 0 && lemons.putFruit(tmp->_elem))
			{}
			else if (tmp->_elem->getName().compare("banana") == 0 && bananas.putFruit(tmp->_elem))
			{}
			else
				unsorted.putFruit(tmp->_elem);
		}
		tmp = tmp->next;
	}
}