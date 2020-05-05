/*
** Woody.h for Project-Master in /home/tekm/tek1/cpp_d13/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan 16 12:16:39 2017 leroy_0
** Last update Mon Jan 16 12:16:39 2017 leroy_0
*/

#ifndef __WOODY_H_
#define __WOODY_H_


#include "Toy.h"
#include "Picture.h"

class Woody : public Toy
{
	public:
		void 		speak(const std::string & to_say);

		Woody(const std::string & name, const std::string & ascii = "woody.txt");
		~Woody();
};

#endif