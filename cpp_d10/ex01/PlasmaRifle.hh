//
// PlasmaRifle.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:01 2017 leroy_0
// Last update Fri Jan 13 13:06:01 2017 leroy_0
//

#ifndef __PLASMARIFLE_H_
#define __PLASMARIFLE_H_

#include <iostream>
#include <string>
#include "AWeapon.hh"

class PlasmaRifle : virtual public AWeapon
{
	public:
		void		 	attack() const;

		PlasmaRifle();
		~PlasmaRifle();
};

#endif