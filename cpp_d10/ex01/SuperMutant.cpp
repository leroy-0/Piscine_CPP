//
// SuperMutant.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:06:42 2017 leroy_0
// Last update Fri Jan 13 13:06:42 2017 leroy_0
//

#include <string>
#include <iostream>
#include "AEnemy.hh"
#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

void 		SuperMutant::takeDamage(int dmg)
{
    dmg -= 3;
    if (dmg > 0)
        this->_hp -= dmg;
}