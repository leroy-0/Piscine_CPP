/*
** ToyStory.h for Project-Master in /home/tekm/tek1/cpp_d13/ex06
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan 16 15:30:59 2017 leroy_0
** Last update Mon Jan 16 15:30:59 2017 leroy_0
*/

#ifndef __TOYSTORY_H_
#define __TOYSTORY_H_

#include <iostream>
#include <string>
#include "Toy.h"

typedef bool (Toy::*speak_story)(const std::string &);

class ToyStory
{
	public:
		static bool tellMeAStory(const std::string & filename, Toy &, speak_story , Toy &, speak_story);

		ToyStory();
		virtual ~ToyStory();
	
};

#endif