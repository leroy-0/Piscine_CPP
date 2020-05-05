/*
** OneTime.h for Project-Master in /home/tekm/tek1/cpp_d17/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Fri Jan 20 12:38:38 2017 leroy_0
** Last update Fri Jan 20 12:38:39 2017 leroy_0
*/

#ifndef __ONETIME_H_
#define __ONETIME_H_

#include <string>
#include <iostream>

#include "IEncryptionMethod.h"

class OneTime : public IEncryptionMethod
{
	public:
		void 	encryptChar(char plainchar);
		void 	decryptChar(char cipherchar);
		void 	reset();

		OneTime(const std::string &);
		~OneTime();

	public:
		std::string 	_key;
		unsigned int 	_pos_encrypt;
		unsigned int 	_pos_decrypt;
};

#endif 	/* __ONETIME_H_ */