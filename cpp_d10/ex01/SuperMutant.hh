//
// SuperMutant.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:38 2017 leroy_0
// Last update Fri Jan 13 13:06:38 2017 leroy_0
//

#ifndef __SUPERMUTANT_H_
#define __SUPERMUTANT_H_

#include <string>
#include <iostream>
#include "AEnemy.hh"

class SuperMutant : virtual public AEnemy
{
	public:
    	SuperMutant();
    	virtual ~SuperMutant();

    void 		takeDamage(int);
};

#endif