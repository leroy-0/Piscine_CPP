//
// WarpSystem.cpp for Project-Master in /home/tekm/tek1/cpp_d07m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 10:14:29 2017 leroy_0
// Last update Tue Jan 10 10:14:29 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>

#include 	"WarpSystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
	this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{

}

bool		WarpSystem::QuantumReactor::isStable()
{
	if (this->_stability)
		return (true);
	return (false);
}

void		WarpSystem::QuantumReactor::setStability(bool stability)
{
	this->_stability = stability;
}


WarpSystem::Core::Core(QuantumReactor *coreReactor)
{
	this->_coreReactor = coreReactor;
}

WarpSystem::Core::~Core()
{

}