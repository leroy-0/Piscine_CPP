//
// Picture.cpp for Project-Master in /home/tekm/tek1/piscine_cpp_d13/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan 16 10:05:12 2017 leroy_0
// Last update Mon Jan 16 10:05:12 2017 leroy_0
//

#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

#include "Picture.h"

Picture::Picture(const Picture & picture)
{
	this->data = picture.data;
}

Picture::Picture(const std::string & filename)
{
	if (filename.empty())
		this->data = "";
	else
		getPictureFromFile(filename);
}

Picture::~Picture() {}

Picture& 	Picture::operator=(const Picture & picture)
{
	this->data = picture.data;
	return (*this);
}

bool		Picture::getPictureFromFile(const std::string & filename)
{
	std::ifstream content(filename.c_str());

	if (!content)
	{
		this->data = "ERROR";
		return (false);
	}

	std::stringstream buffer;
	buffer << content.rdbuf();

	this->data = buffer.str();
	return (true);
}