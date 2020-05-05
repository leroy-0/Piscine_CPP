//
// koalanurse.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 16:30:25 2017 leroy_0
// Last update Mon Jan  9 16:30:25 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>

#include "koalanurse.h"

KoalaNurse::KoalaNurse(unsigned int id)
{
	this->id = id;
	this->work = false;
}

KoalaNurse::~KoalaNurse()
{
	std::cout << "Nurse " << this->id << ": Enfin un peu de repos!" << std::endl;
}

void		KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
	patient->takeDrug(drug);
}

std::string 	KoalaNurse::readReport(std::string file)
{
	std::string 		name = "";
	std::string 		drug = "";
	std::stringstream 	buffer;
	std::ifstream 		content(file.data());

  	if (file.substr(file.find_last_of(".") + 1) == "report" && content && content.is_open())
    {
		buffer << content.rdbuf();
		drug = buffer.str();
		if (drug.find('\n') != std::string::npos)
			drug.erase(drug.find('\n'));
		if (file.find("/") != std::string::npos)
		{
			name = file.substr(0, file.find_last_of("."));
			name = name.substr(file.find_last_of("/") + 1, name.size());
		}
    	else
    	{
    		name = file.substr(0, file.find_last_of("."));	        		
    	}
		std::cout << "Nurse " << this->id << ": Kreog! Il faut donner un " << drug << " a Mr." << name << "!" << std::endl;
    }
   	return (drug);
}

void		KoalaNurse::timeCheck()
{
	if (!this->work)
	{
		this->work = true;
		std::cout << "Nurse " << this->id << ": Je commence le travail!" << std::endl;
	}
	else
	{
		this->work = false;
		std::cout << "Nurse " << this->id << ": Je rentre dans ma foret d'eucalyptus!" << std::endl;		
	}
}