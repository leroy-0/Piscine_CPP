//
// koaladoctorlist.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex05
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 19:14:35 2017 leroy_0
// Last update Mon Jan  9 19:14:35 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>

#include "koaladoctorlist.h"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *doctor)
{
	this->elem = doctor;
	this->next = NULL;
}

KoalaDoctorList::~KoalaDoctorList()
{

}

bool		KoalaDoctorList::isEnd()
{
	if (this->next != NULL)
		return (false);
	return (true);
}

void 		KoalaDoctorList::append(KoalaDoctorList *sicklist)
{
	KoalaDoctorList *tmp;

	tmp = this;
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = sicklist;
}

KoalaDoctor 	*KoalaDoctorList::getFromName(std::string firstkoala)
{
	KoalaDoctorList *tmp;

	tmp = this;
	while (tmp)
	{
		if (firstkoala.compare(tmp->elem->name) == 0)
			return (tmp->elem);
		tmp = tmp->next;
	}
	return (NULL);
}

KoalaDoctorList 	*KoalaDoctorList::remove(KoalaDoctorList *sicklist)
{
	KoalaDoctorList *tmp;
	KoalaDoctorList *save;

	if (this->elem == sicklist->elem)
		return (this->next);

	tmp = this;
	while (tmp)
	{
		if (tmp->elem == sicklist->elem)
		{
			save->next = tmp->next;
			return (this);
		}
		save = tmp;
		tmp = tmp->next;
	}
	return (this);
}

KoalaDoctorList 	*KoalaDoctorList::removeFromName(std::string name)
{
	KoalaDoctorList *tmp;
	KoalaDoctorList *save;

	if (this->elem->name == name)
		return (this->next);

	tmp = this;
	while (tmp)
	{
		if (tmp->elem->name == name)
		{
			save->next = tmp->next;
			return (this);
		}
		save = tmp;
		tmp = tmp->next;
	}
	return (this);
}

void			KoalaDoctorList::dump()
{
	KoalaDoctorList *tmp;

	std::cout << "Liste des medecins: ";

	tmp = this;
	while (tmp)
	{
		if (tmp->elem != NULL)
			std::cout << tmp->elem->name;
		else
			std::cout << "[NULL]";

		if (tmp->next != NULL)
			std::cout << ", ";

		tmp = tmp->next;
	}
	std::cout << "." << std::endl;
}