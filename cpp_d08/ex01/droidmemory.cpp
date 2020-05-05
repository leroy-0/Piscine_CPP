//
// droidmemory.cpp for Project-Master in /home/tekm/tek1/cpp_d08/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 11 14:39:45 2017 leroy_0
// Last update Wed Jan 11 14:39:46 2017 leroy_0
//

#include <iostream>
#include <string>
#include "droidmemory.hh"

DroidMemory::DroidMemory() : FingerPrint(std::rand()), Exp(0)
{

}

DroidMemory::~DroidMemory()
{

}

size_t		DroidMemory::getFingerPrint() const
{
	return (this->FingerPrint);
}

void		DroidMemory::setFingerPrint(const size_t FingerPrint)
{
	this->FingerPrint = FingerPrint;
}

size_t 		DroidMemory::getExp() const
{
	return (this->Exp);
}

void 		DroidMemory::setExp(const size_t Exp)
{
	this->Exp = Exp;
}

DroidMemory& 		operator<<(DroidMemory & a, const DroidMemory & b)
{
	a.setExp(a.getExp() + b.getExp());
	a.setFingerPrint(a.getFingerPrint()^b.getFingerPrint());
	return (a);
}

DroidMemory& 		operator>>(const DroidMemory & b, DroidMemory & a)
{
	a.setExp(b.getExp() + a.getExp());
	a.setFingerPrint(b.getFingerPrint()^a.getFingerPrint());
	return (a);
}

DroidMemory& 		DroidMemory::operator+=(const size_t x)
{
	this->setExp(this->getExp() + x);
	this->setFingerPrint(this->getFingerPrint()^x);
	return (*this);
}

DroidMemory& 		DroidMemory::operator+=(const DroidMemory & b)
{
	this->setExp(this->getExp() + b.getExp());
	this->setFingerPrint(this->getFingerPrint()^b.getFingerPrint());
	return (*this);
}

DroidMemory 		operator+(const DroidMemory & a, const size_t & b)
{
	DroidMemory *newDroid = new DroidMemory;

	newDroid->setFingerPrint(a.getFingerPrint()^b);
	newDroid->setExp(a.getExp() + b);

	return (*newDroid);
}

DroidMemory 		operator+(const DroidMemory & a, const DroidMemory & b)
{
	DroidMemory *newDroid = new DroidMemory;

	newDroid->setFingerPrint(a.getFingerPrint()^b.getFingerPrint());
	newDroid->setExp(a.getExp() + b.getExp());
	return (*newDroid);
}

std::ostream& 		operator<<(std::ostream& os, const DroidMemory & droid_m)
{
	os << "DroidMemory '" << droid_m.getFingerPrint() << "', " << droid_m.getExp();
	return (os);
}