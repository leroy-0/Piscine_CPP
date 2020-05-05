/*
** Toy.h for Project-Master in /home/tekm/tek1/piscine_cpp_d13/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan 16 10:05:19 2017 leroy_0
** Last update Mon Jan 16 10:05:19 2017 leroy_0
*/

#ifndef __TOY_H_
#define __TOY_H_

#include <iostream>
#include <string>

#include "Picture.h"

class Toy
{
	public:
		enum 	ToyType
		{
			BASIC_TOY,
			ALIEN,
			BUZZ,
			WOODY
		};

		ToyType			getType() const;
		std::string 	getName() const;
		std::string 	getAscii() const;
		void 			setName(const std::string &);
		bool 			setAscii(const std::string & filename);

		virtual void 			speak(const std::string &);

		Toy& 			operator=(const Toy &);
		Toy& 			operator<<(const std::string & str);

		Toy(const Toy &);
		Toy();
		Toy(ToyType, const std::string &, const std::string &);
		virtual ~Toy();

	protected:
		ToyType 		_type;
		std::string 	_name;
		Picture 		*_picture;

};

std::ostream& 		operator<<(std::ostream & os, const Toy & toy);

#endif