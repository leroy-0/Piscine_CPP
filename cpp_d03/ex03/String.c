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

static void append_s(String *this, String const *ap)
{
	char *tmp;

	if (this && ap)
	{
		if (this->str)
		{
			if (ap->str)
			{
				tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(ap->str) + 1));
				tmp[0] = '\0';
				strcat(tmp, this->str);
				strcat(tmp, ap->str);
				free(this->str);
				this->str = strdup(tmp);
				free(tmp);
			}
		}
		else
		{
			if (ap->str)
				this->str = strdup(ap->str);
		}
	}
}

static void append_c(String *this, char const *aps)
{
	char *tmp;

	if (this)
	{
		if (this->str)
		{
			if (aps)
			{
				tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(aps) + 1));
				tmp[0] = '\0';
				strcat(tmp, this->str);
				strcat(tmp, aps);
				free(this->str);
				this->str = strdup(tmp);
				free(tmp);
			}
		}
		else
		{
			if (aps)
				this->str = strdup(aps);
		}
	}
}

static	char at(String *this, size_t pos)
{
	size_t x = 0;

	if (this && this->str)
	{
		while (this->str[x] && x < pos)
			x++;

		if (x != pos)
			return (-1);

		return (this->str[x]);
	}
	return (-1);
}

void	StringInit(String *this, char const *s)
{
	if (this)
	{
		if (s)
			this->str = strdup(s);

		this->assign_s = &assign_s;
		this->assign_c = &assign_c;
		this->append_s = &append_s;
		this->append_c = &append_c;
		this->at = &at;
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