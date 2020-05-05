//
// koaladoctor.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex04
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 18:23:12 2017 leroy_0
// Last update Mon Jan  9 18:23:12 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>

#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
	this->name = name;
	this->work = false;
	std::cout << "Dr. " << name << ": Je suis le Dr." << name << "! Comment Kreoggez-vous ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{

}

void		KoalaDoctor::timeCheck()
{
	if (!this->work)
	{
		this->work = true;
		std::cout << "Dr." << this->name << ": Je commence le travail!" << std::endl;
	}
	else
	{
		this->work = false;
		std::cout << "Dr." << this->name << ": Je rentre dans ma foret d'eucalyptus!" << std::endl;		
	}
}

void		KoalaDoctor::diagnose(SickKoala *patient)
{
	std::cout << "Dr. " << this->name << ": Alors, qu'est-ce qui vous goerk, Mr." << patient->name << " ?" << std::endl;
	patient->poke();

	std::string filename = patient->name + ".report";
	std::ofstream file (filename.c_str(), std::ofstream::out);

	switch	(random() % 5)
	{
		case 0:
			file << "mars";
			break;
		case 1:
			file << "Buronzand";
			break;
		case 2:
			file << "Viagra";
			break;
		case 3:
			file << "Extasy";
			break;
		case 4:
			file << "Feuille d'Eucalyptus";
			break;
	}

	file.close();
}