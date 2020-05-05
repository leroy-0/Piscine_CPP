//
// PlasmaRifle.cpp for Project-Master in /home/tekm/tek1/cpp_d10/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Fri Jan 13 13:05:58 2017 leroy_0
// Last update Fri Jan 13 13:05:58 2017 leroy_0
//

#include <iostream>
#include <string>
#include "PlasmaRifle.hh"
#include "AWeapon.hh"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle() {}

void 		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}