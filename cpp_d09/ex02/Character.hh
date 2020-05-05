//
// Character.hh for Project-Master in /home/tekm/tek1/cpp_d09/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 12:41:34 2017 leroy_0
// Last update Thu Jan 12 12:41:34 2017 leroy_0
//

#ifndef 	__CHARACTER_H_
#define 	__CHARACTER_H_

#include <iostream>
#include <string>

class Character
{
	public:
		const std::string 	&getName() 	const;
		int 				getLvl() 	const;
		int 				getPv() 	const;
		int 				getPower() 	const;

		virtual int			CloseAttack();
		virtual int			RangeAttack();

		virtual	void 		Heal();
		virtual void 		RestorePower();
		
		void 				TakeDamage(int);

		Character(const std::string, int);
		~Character();

	public:
		enum AttackRange
		{
			CLOSE,
			RANGE
		};
		
		enum 	AttackRange 	Range;

	protected:
		std::string _name;
		int 		_Lvl;
		int			_Pv;
		int			_Power;

		int 		_Strength;
		int 		_Stamina;
		int 		_Intelligence;
		int 		_Spirit;
		int 		_Agility;
};

#endif 		/* __CHARACTER_H_ */