/*
** Cesar.h for Project-Master in /home/tekm/tek1/cpp_d17/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Fri Jan 20 12:38:30 2017 leroy_0
** Last update Fri Jan 20 12:38:30 2017 leroy_0
*/

#ifndef __CESAR_H_
#define __CESAR_H_

#include "IEncryptionMethod.h"

class Cesar : public IEncryptionMethod
{
	public:
		void 	encryptChar(char plainchar);
		void 	decryptChar(char cipherchar);
		void 	reset();

		Cesar();
		~Cesar();
		
	public:
		int 	_ShiftLetter_encode;
		int 	_ShiftLetter_decode;
};

#endif	/* __CESAR_H_ */