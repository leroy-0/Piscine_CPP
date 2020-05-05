/*
** Buzz.h for Project-Master in /home/tekm/tek1/cpp_d13/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan 16 12:16:29 2017 leroy_0
** Last update Mon Jan 16 12:16:30 2017 leroy_0
*/

#ifndef __BUZZ_H_
#define __BUZZ_H_

#include "Toy.h"
#include "Picture.h"

class Buzz : public Toy
{
	public:
		void 		speak(const std::string & to_say);
		bool 		speak_es(const std::string & to_say);

		Buzz(const std::string & name, const std::string & ascii = "");
		~Buzz();
};

#endif