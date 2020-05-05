//
// Character.hh for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:07:07 2017 leroy_0
// Last update Fri Jan 13 13:07:08 2017 leroy_0
//

#ifndef __CHARACTER_H_
#define __CHARACTER_H_

#include "AWeapon.hh"
#include "AEnemy.hh"

class Character
{
	public:
		void recoverAP();
		void equip(AWeapon *);
		void attack(AEnemy *);

		const std::string & getName() const;
		int 				getAP() const;
		AWeapon 			*getWeapon() const;

		Character(const std::string name);

		~Character();

	private:
		AWeapon 	*_weapon;

		std::string 	_name;
		int 			_ap;

};

std::ostream& 		operator<<(std::ostream & os, const Character & character);

#endif