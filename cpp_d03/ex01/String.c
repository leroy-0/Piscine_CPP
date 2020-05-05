/*
** String.c for Project-Master in /home/tekm/tek1/cpp_d03/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Fri Jan  6 10:22:26 2017 leroy_0
** Last update Fri Jan  6 10:22:27 2017 leroy_0
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "String.h"

static void	assign_s(String *this, String const *str)
{
	if (this && str)
	{
		if (this->str)
		{
			free(this->str);
			if (str->str)
				this->str = strdup(str->str);
			else
				this->str = NULL;
		}
		else
		{
			if (str->str)
				this->str = strdup(str->str);
		}
	}
}

static void	assign_c(String *this, char const *s)
{
	if (this)
	{
		if (this->str)
		{
			free(this->str);
			if (s)
				this->str = strdup(s);
			else
				this->str = NULL;
		}
		else
		{
			if (s)
				this->str = strdup(s);
		}
	}
}

void	StringInit(String *this, char const *s)
{
	if (this)
	{
		if (s)
			this->str = strdup(s);
		
		this->assign_s = &assign_s;
		this->assign_c = &assign_c;
	}
}

void	StringDestroy(String *this)
{
	if (this)
	{
		if (this->str)
			free(this->str);
		this->str = NULL;
	}
}