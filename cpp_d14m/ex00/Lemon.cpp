//
// Lemon.cpp for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 17 10:10:04 2017 leroy_0
// Last update Tue Jan 17 13:39:05 2017 leroy_0
//

#include "Lemon.h"

Lemon::Lemon() : Fruit("lemon", 3)
{

}

Lemon::~Lemon() {};

std::string Lemon::getName() const
{
    return (this->_name);
}
