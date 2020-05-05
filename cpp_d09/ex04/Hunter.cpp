//
// Hunter.cpp for Project-Master in /home/tekm/tek1/cpp_d09/ex04
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Thu Jan 12 20:11:36 2017 leroy_0
// Last update Thu Jan 12 20:11:37 2017 leroy_0
//

#include    <string>
#include    <iostream>
#include    "Hunter.hh"
#include    "Character.hh"

Hunter::Hunter(const std::string name, int Lvl) : Character(name, Lvl), Warrior(name, Lvl)
{
  this->_Strength = 9;
  this->_Stamina = 9;
  this->_Intelligence = 5;
  this->_Spirit = 6;
  this->_Agility = 24;

  this->weaponName = "sword";

  std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{

}

int     Hunter::CloseAttack()
{
  if (this->_Power < 30)
  {
    std::cout << this->getName() << " out of power" << std::endl;
    return (0);
  }

  this->_Power -= 30;
  std::cout << this->getName() << " strikes with his " << this->weaponName << std::endl;
  return (20 + this->_Strength);
}

int     Hunter::RangeAttack()
{
  if (this->_Power < 25)
  {
    std::cout << this->getName() << " out of power" << std::endl;
    return (0);
  }

  this->_Power -= 25;
  std::cout << this->getName() << " uses his bow" << std::endl;
  return (20 + this->_Agility);
}

void 	Hunter::RestorePower()
{
   this->_Power = 100;
    std::cout << this->_name << " meditates" << std::endl;
}