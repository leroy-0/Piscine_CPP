/*
** BF_Translator.h for Project-Master in /home/tekm/tek1/cpp_d16/ex03
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan 19 19:51:18 2017 leroy_0
** Last update Thu Jan 19 19:51:19 2017 leroy_0
*/

#ifndef __BF_TRANSLATOR_H_
#define __BF_TRANSLATOR_H_

#include <fstream>
#include <map>
#include <iostream>
#include <string>

class BF_Translator
{
	public:
		int translate(std::string, std::string);

    	BF_Translator();
    	~BF_Translator();

    public:
    	std::map<char, std::string>		_map;
     	std::ofstream 					_out;
    	std::ifstream 					_in;
};

#endif 		/* __BF_TRANSLATOR_H_ */