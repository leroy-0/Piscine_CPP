//
// Encryption.cpp for Project-Master in /home/tekm/tek1/cpp_d17/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 20 15:13:08 2017 leroy_0
// Last update Fri Jan 20 15:13:09 2017 leroy_0
//

#include <string>
#include <iostream>
#include <algorithm>

#include "IEncryptionMethod.h"
#include "Encryption.h"
#include "Cesar.h"
#include "OneTime.h"

Encryption::Encryption(IEncryptionMethod& encryptionMethod, void(IEncryptionMethod::*method)(char)) : _encrypt_method(encryptionMethod), _method(method)
{
}

Encryption::~Encryption()
{
}

void 		Encryption::operator()(char plainchar)
{
	(_encrypt_method.*_method)(plainchar);
}

void 		Encryption::encryptString(IEncryptionMethod& encryptionMethod, const std::string & toEncrypt)
{
	encryptionMethod.reset();
	std::for_each(toEncrypt.begin(), toEncrypt.end(), Encryption(encryptionMethod, &IEncryptionMethod::encryptChar));
	std::cout << std::endl;
}

void 		Encryption::decryptString(IEncryptionMethod& encryptionMethod, const std::string & toDecrypt)
{
	encryptionMethod.reset();
	std::for_each(toDecrypt.begin(), toDecrypt.end(), Encryption(encryptionMethod, &IEncryptionMethod::decryptChar));
	std::cout << std::endl;
}