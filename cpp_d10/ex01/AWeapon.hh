//
// AWeapon.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:05:39 2017 leroy_0
// Last update Fri Jan 13 13:05:40 2017 leroy_0
//

#ifndef __AWEAPON_H_
#define __AWEAPON_H_

#include <iostream>
#include <string>

class AWeapon
{
	public:
		const std::string& 	getName() const;
		int 				getAPCost() const;
		int 				getDamage() const;
		virtual void 		attack() const = 0;

		AWeapon(const std::string, int, int);
		virtual ~AWeapon();

	private:
		std::string 	_name;
		int 			_damage;
		int 			_cost;

	protected:
		std::string 	_sound;
};

#endif