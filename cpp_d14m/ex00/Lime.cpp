//
// Lime.cpp for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 17 10:04:28 2017 leroy_0
// Last update Tue Jan 17 13:37:49 2017 leroy_0
//

#include "Lime.h"
#include "Lemon.h"

Lime::Lime() : Fruit("lime", 2), Lemon()
{

}

Lime::~Lime() {}

std::string Lime::getName() const
{
    return (this->_name);
}
