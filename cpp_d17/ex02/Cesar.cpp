//
// Cesar.cpp for Project-Master in /home/tekm/tek1/cpp_d17/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 20 12:38:27 2017 leroy_0
// Last update Fri Jan 20 12:38:28 2017 leroy_0
//

#include <string>
#include <iostream>
#include "Cesar.h"

Cesar::Cesar()
{
	_ShiftLetter_encode = 0;
	_ShiftLetter_decode = 0;
}

Cesar::~Cesar()
{

}

void 	Cesar::encryptChar(char plainchar)
{
	int res = (3 + _ShiftLetter_encode) % 26;

	_ShiftLetter_encode++;

	if (plainchar >= 'A' && plainchar <= 'Z')
	{
		if (res + plainchar > 'Z')
			plainchar = 'A' + res - ('Z' - plainchar) - 1;
		else
			plainchar += res;
	}
	else if (plainchar >= 'a' && plainchar <= 'z')
	{
		if (res + plainchar > 'z')
			plainchar = 'a' + res - ('z' - plainchar) - 1;
		else
			plainchar += res;
	}
	std::cout << plainchar;
}

void 	Cesar::decryptChar(char cipherchar)
{
	int res = (3 + _ShiftLetter_decode) % 26;

	_ShiftLetter_decode++;

	if (cipherchar >= 'A' && cipherchar <= 'Z')
	{
		if (cipherchar - res < 'A')
			cipherchar = 'Z' - (res - (cipherchar - 'A')) + 1;
		else
			cipherchar -= res;
	}
	else if (cipherchar >= 'a' && cipherchar <= 'z')
	{
		if (cipherchar - res < 'a')
			cipherchar = 'z' - (res - (cipherchar - 'a')) + 1;
		else
			cipherchar -= res;
	}
	std::cout << cipherchar;
}

void 	Cesar::reset()
{
	_ShiftLetter_encode = 0;
	_ShiftLetter_decode = 0;
}