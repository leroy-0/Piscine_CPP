/*
** Encryption.h for Project-Master in /home/tekm/tek1/cpp_d17/ex03
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Fri Jan 20 15:13:50 2017 leroy_0
** Last update Fri Jan 20 15:14:01 2017 leroy_0
*/

#ifndef __ENCRYPTION_H_
#define __ENCRYPTION_H_

#include <string>
#include <iostream>

#include "Cesar.h"
#include "OneTime.h"
#include "IEncryptionMethod.h"

class Encryption
{
	public:
		Encryption(IEncryptionMethod& encryptionMethod, void(IEncryptionMethod::*method)(char plainchar));
		~Encryption();

	public:
		IEncryptionMethod 		&_encrypt_method;
		typedef void(IEncryptionMethod::*function)(char plainchar);
		function				_method;

	public:
		void operator()(char plainchar);

	public:
		static void encryptString(IEncryptionMethod& encryptionMethod, const std::string & toEncrypt);
		static void decryptString(IEncryptionMethod& encryptionMethod, const std::string & toDecrypt);
};

#endif 	/* __ENCRYPTION_H_ */