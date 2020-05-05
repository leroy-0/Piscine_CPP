//
// Fruit.cpp for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 17 10:08:05 2017 leroy_0
// Last update Tue Jan 17 13:38:06 2017 leroy_0
//

#include "Fruit.h"

Fruit::Fruit(const std::string & name, int vitamins) : _name(name), _vitamins(vitamins)
{

}

Fruit::~Fruit() {}

std::string Fruit::getName() const
{
    return (this->_name);
}

int 	Fruit::getVitamins() const
{
    return (this->_vitamins);
}
