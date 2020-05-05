//
// OneTime.cpp for Project-Master in /home/tekm/tek1/cpp_d17/ex02
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 20 12:38:35 2017 leroy_0
// Last update Fri Jan 20 12:38:36 2017 leroy_0
//

#include "OneTime.h"

OneTime::OneTime(const std::string & key)
{
	_key = key;
	_pos_encrypt = 0;
	_pos_decrypt = 0;
}

OneTime::~OneTime()
{

}

void 		OneTime::encryptChar(char plainchar)
{
	int 	res = 0;

	if (_key[_pos_encrypt] >= 'A' && _key[_pos_encrypt] <= 'Z')
		res = (res + (_key[_pos_encrypt] - 'A')) % 26;
	else if (_key[_pos_encrypt] >= 'a' && _key[_pos_encrypt] <= 'z')
		res = (res + (_key[_pos_encrypt] - 'a')) % 26;

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

	if (_pos_encrypt + 1 >= _key.size())
		_pos_encrypt = 0;
	else
		_pos_encrypt++;

	std::cout << plainchar;
}

void 	OneTime::decryptChar(char cipherchar)
{
	int 	res = 0;

	if (_key[_pos_decrypt] >= 'A' && _key[_pos_decrypt] <= 'Z')
		res = (res + (_key[_pos_decrypt] - 'A')) % 26;
	else if (_key[_pos_decrypt] >= 'a' && _key[_pos_decrypt] <= 'z')
		res = (res + (_key[_pos_decrypt] - 'a')) % 26;


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

	if (_pos_decrypt + 1 >= _key.size())
		_pos_decrypt = 0;
	else
		_pos_decrypt++;

	std::cout << cipherchar;
}

void 	OneTime::reset()
{
	_pos_encrypt = 0;
	_pos_decrypt = 0;
}