/*
** FruitNode.h for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 17 10:38:34 2017 leroy_0
** Last update Tue Jan 17 13:38:55 2017 leroy_0
*/

#ifndef __FRUITNODE_H_
#define __FRUITNODE_H_

#include "Fruit.h"

typedef struct 	FruitNode {
    FruitNode 	*next;
    FruitNode 	*prev;

    Fruit 		*_elem;
} 				FruitNode;

#endif 		/* __FRUITNODE_H_ */
