//
// koalanurselist.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex05
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 19:14:02 2017 leroy_0
// Last update Mon Jan  9 19:14:03 2017 leroy_0
//

#include <algorithm>	
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>

#include "koalanurselist.h"

KoalaNurseList::KoalaNurseList(KoalaNurse *nurse)
{
	this->elem = nurse;
	this->next = NULL;
}

KoalaNurseList::~KoalaNurseList()
{

}

bool		KoalaNurseList::isEnd()
{
	if (this->next != NULL)
		return (false);
	return (true);
}

void 		KoalaNurseList::append(KoalaNurseList *sicklist)
{
	KoalaNurseList *tmp;

	tmp = this;
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = sicklist;
}

KoalaNurse 	*KoalaNurseList::getFromID(int firstkoala)
{
	KoalaNurseList *tmp;

	tmp = this;
	while (tmp)
	{
		if (firstkoala == (int)tmp->elem->id)
			return (tmp->elem);
		tmp = tmp->next;
	}
	return (NULL);
}

KoalaNurseList 	*KoalaNurseList::remove(KoalaNurseList *sicklist)
{
	KoalaNurseList *tmp;
	KoalaNurseList *save;

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

KoalaNurseList 	*KoalaNurseList::removeFromID(int id)
{
	KoalaNurseList *tmp;

	tmp = this;
	while (tmp)
	{
		if ((int)tmp->elem->id == id)
		{
			tmp->elem = NULL;
			break;
		}
		tmp = tmp->next;
	}
	return (this);
}

void			KoalaNurseList::dump()
{
	KoalaNurseList *tmp;

	std::cout << "Liste des infirmieres: ";

	tmp = this;
	while (tmp)
	{
		if (tmp->elem != NULL)
			std::cout << tmp->elem->id;
		else
			std::cout << "[NULL]";

		if (tmp->next != NULL)
			std::cout << ", ";

		tmp = tmp->next;
	}
	std::cout << "." << std::endl;
}