/*
** String.c for Project-Master in /home/tekm/tek1/cpp_d03/ex00
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Fri Jan  6 10:22:26 2017 leroy_0
** Last update Fri Jan  6 15:22:15 2017 leroy_0
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

static	void clear(String *this)
{
	if (this && this->str)
		memset(this->str, 0, strlen(this->str));
}

static	int size(String *this)
{
	if (this && this->str)
		return (strlen(this->str));
	return (-1);
}

static	int compare_s(String *this, const String *str)
{
	if (this && str && this->str && str->str)
		return (strcmp(this->str, str->str));
	return (0);
}

static	int compare_c(String *this, char const *str)
{
	if (this && this->str && str)
		return (strcmp(this->str, str));
	return (0);
}

static size_t copy(String *this, char *s, size_t n, size_t pos)
{
  if (this->str == NULL || s == NULL)
    return (0);
  if (strlen(this->str) < (n + pos) || strlen(this->str) < pos)
    return (0);
  s = strncpy(s, &(this->str[pos]), n);
  return (n);
}

static char const *c_str(String *this)
{
	return (this->str);
}

static int empty(String *this)
{
	if (!this || this->str == NULL || strlen(this->str) > 0)
		return (-1);
	return (1);
}

void	StringInit(String *this, char const *s)
{
	if (this)
	{
		if (s)
			this->str = strdup(s);
		else
			this->str = NULL;

		this->assign_s = &assign_s;
		this->assign_c = &assign_c;
		this->append_s = &append_s;
		this->append_c = &append_c;
		this->at = &at;
		this->clear = &clear;
		this->size = &size;
		this->compare_s = &compare_s;
		this->compare_c = &compare_c;
		this->copy = &copy;
		this->c_str = &c_str;
		this->empty = &empty;
	}
}

void	StringDestroy(String *this)
{
	if (this)
	{
		free(this->str);
		this->str = NULL;
	}
}
