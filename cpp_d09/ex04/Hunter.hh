//
// Hunter.hh for Project-Master in /home/tekm/tek1/cpp_d09/ex04
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 20:11:40 2017 leroy_0
// Last update Thu Jan 12 20:11:40 2017 leroy_0
//

#ifndef 	__Hunter_H_
#define 	__Hunter_H_

#include 	<iostream>
#include 	<string>
#include	"Character.hh"
#include 	"Warrior.hh"

class Hunter : public virtual Character, private Warrior
{
	public:
		Hunter(const std::string, int);
  		~Hunter();

  	public:
  		int 	RangeAttack();
  		int 	CloseAttack();
  		void 	RestorePower();
};


#endif		/* __Hunter_H_ */