//
// sickkoalalist.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex05
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 19:14:17 2017 leroy_0
// Last update Mon Jan  9 19:14:17 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>

#include "sickkoalalist.h"

SickKoalaList::SickKoalaList(SickKoala *patient)
{
	this->elem = patient;
	this->next = NULL;
}

SickKoalaList::~SickKoalaList()
{

}

bool		SickKoalaList::isEnd()
{
	if (this->next != NULL)
		return (false);
	return (true);
}

void 		SickKoalaList::append(SickKoalaList *sicklist)
{
	SickKoalaList *tmp;

	tmp = this;
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = sicklist;
}

SickKoala 	*SickKoalaList::getFromName(std::string firstkoala)
{
	SickKoalaList *tmp;

	tmp = this;
	while (tmp)
	{
		if (tmp->elem != NULL && tmp->elem->getName() == firstkoala)
			std::cout << tmp->elem->name;
		tmp = tmp->next;
	}
	return (NULL);
}

SickKoalaList 	*SickKoalaList::remove(SickKoalaList *sicklist)
{
	SickKoalaList *tmp;
	SickKoalaList *save;

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

SickKoalaList 	*SickKoalaList::removeFromName(std::string name)
{
	SickKoalaList *tmp;

	tmp = this;
	while (tmp)
	{
		if (tmp->elem->name.compare(name) == 0)
		{
			tmp->elem = NULL;
			break;
		}
		tmp = tmp->next;
	}
	return (this);
}

void			SickKoalaList::dump()
{
	SickKoalaList *tmp;

	std::cout << "Liste des patients: ";

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

SickKoala 	*SickKoalaList::getContent()
{
	return (this->elem);
}

SickKoalaList 	*SickKoalaList::getNext()
{
	if (this->next)
		return (this->next);
	return (NULL);
}