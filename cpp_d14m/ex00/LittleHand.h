/*
** LittleHand.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 14:32:27 2017 leroy_0
** Last update Tue Jan 17 14:32:27 2017 leroy_0
*/

#ifndef __LITTLEHAND_H_
#define __LITTLEHAND_H_

#include "Lime.h"
#include "Fruit.h"
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"

class LittleHand
{
	public:
		LittleHand();
		virtual ~LittleHand();

		static void sortFruitBox(FruitBox&, FruitBox&, FruitBox&, FruitBox&);
};

#endif