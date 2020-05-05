//
// RadScorpion.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:51 2017 leroy_0
// Last update Fri Jan 13 13:06:52 2017 leroy_0
//

#ifndef __RADSCORPION_H_
#define __RADSCORPION_H_

#include <string>
#include <iostream>
#include "AEnemy.hh"

class RadScorpion : virtual public AEnemy
{
	public:
    	RadScorpion();
    	virtual ~RadScorpion();
};

#endif