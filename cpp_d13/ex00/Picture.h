/*
** Picture.h for Project-Master in /home/tekm/tek1/piscine_cpp_d13/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan 16 10:05:09 2017 leroy_0
** Last update Mon Jan 16 10:05:10 2017 leroy_0
*/

#ifndef __PICTURE_H_
#define __PICTURE_H_

#include <iostream>
#include <string>

class Picture
{
	public:
		std::string data;

		bool getPictureFromFile(const std::string & filename);

		Picture(const std::string & file = "");
		~Picture();
};

#endif