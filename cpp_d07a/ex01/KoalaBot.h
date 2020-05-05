/*
** KoalaBot.h for Project-Master in /home/tekm/tek1/cpp_d07a/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 10 18:58:32 2017 leroy_0
** Last update Tue Jan 10 18:58:32 2017 leroy_0
*/

#ifndef 	__KOALABOT_H_
#define 	__KOALABOT_H_

#include 	<string>
#include 	"Parts.h"

class KoalaBot
{
	public:
		KoalaBot();
		~KoalaBot();

	Arms	_arms;
	Legs	_legs;
	Head	_head;

	std::string		_serial;

	void			setParts(const Arms &_arms);
	void			setParts(const Legs &_legs);
	void 			setParts(const Head &_head);

	void			swapParts(Arms &_arms);
	void			swapParts(Legs &_legs);
	void 			swapParts(Head &_head);

	void			informations() const;
	bool			status() const;
};

#endif		/* __KOALABOT_H_ */