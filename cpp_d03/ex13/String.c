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

static int find_s(String *this, const String *str, size_t pos)
{
	char	*tmp;
	int 	x;
	int 	y = 0;

	if (this && str && str->str && this->str && pos < (strlen(this->str) - 1))
	{
		tmp = strstr(&this->str[pos], str->str);
		x = strlen(&this->str[pos]);

		while (tmp && tmp[y])
			y++;

		return (x - y);
	}
	return (-1);
}

static int find_c(String *this, char const *str, size_t pos)
{
	char	*tmp;
	int 	x;
	int 	y = 0;

	if (this && str && this->str && pos < (strlen(this->str) - 1))
	{
		tmp = strstr(&this->str[pos], str);
		x = strlen(&this->str[pos]);

		while (tmp && tmp[y])
			y++;

		return (x - y);
	}
	return (-1);
}

static void insert_c(String *this, size_t pos, char const *str)
{
	char	*tmp;

	if (this)
	{
		if (this->str)
		{
			if (str)
			{
				if (pos > (strlen(this->str) - 1))
				{
					this->append_c(this, str);
				}
				else
				{
					tmp = malloc(sizeof(char) * ((strlen(this->str)) + strlen(str) + 1));
					tmp[pos] = '\0';
					strncpy(tmp, this->str, pos);
					strcat(tmp, str);
					strcat(tmp, &this->str[pos]);
					if (this->str)
						free(this->str);
					this->str = strdup(tmp);
					free(tmp);
				}
			}
		}
		else
		{
			if (str)
				this->str = strdup(str);
		}
	}
}

static void insert_s(String *this, size_t pos, String const *str)
{
	char	*tmp;

	if (this && str)
	{
		if (this->str)
		{
			if (str->str)
			{
				if (pos > (strlen(this->str) - 1))
				{
					this->append_c(this, str->str);
				}
				else
				{
					tmp = malloc(sizeof(char) * ((strlen(this->str)) + strlen(str->str) + 1));
					tmp[pos] = '\0';
					strncpy(tmp, this->str, pos);
					strcat(tmp, str->str);
					strcat(tmp, &this->str[pos]);
					if (this->str)
						free(this->str);
					this->str = strdup(tmp);
					free(tmp);
				}
			}
		}
		else
		{
			if (str->str)
				this->str = strdup(str->str);
		}
	}	
}

static 	int to_int(String *this)
{
	return (atoi(this->str));
}

static String 	*split_s(String *this, char separator)
{
 	String 		*strings;
 	char 		*delim;
  	char		*tok;
  	char		*tmp;
  	int			i;
  	int			j;

  	i = 0;
  	j = 0;
  	while (this->str && this->str[i])
  	{
  		if (this->str[i] == separator)
	    	j++;
	    i++;
  	}

  	strings = malloc(sizeof(String) * (j + 2));
	delim = malloc(sizeof(char) * 2);
  	delim[0] = separator;
  	delim[1] = '\0';

  	i = 0;
  	tmp = strdup(this->str);
  	while ((tok = strtok(tmp, delim)) != NULL)
    {
    	StringInit(&(strings[i]), tok);
    	tmp = NULL;
    	i++;
    }
  	StringInit(&(strings[i]), "\0");
  	free(tmp);
  	return (strings);
}

static char	**split_c(String *this, char separator)
{
	char 		**strings;
 	char 		*delim;
  	char		*tok;
  	char 		*tmp;
  	int			i;
  	int			j;


  	i = 0;
  	j = 0;
  	while (this->str && this->str[i])
  	{
  		if (this->str[i] == separator)
	    	j++;
	    i++;
  	}

  	strings = malloc(sizeof(char *) * (j + 2));
	delim = malloc(sizeof(char) * 2);
  	delim[0] = separator;
  	delim[1] = '\0';

  	i = 0;
  	tmp = strdup(this->str);
  	while ((tok = strtok(tmp, delim)) != NULL)
    {
    	strings[i] = strdup(tok);
    	tmp = NULL;
    	i++;
    }
    strings[i] = NULL;
    free(tmp);

  	return (strings);
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
		this->find_s = &find_s;
		this->find_c = &find_c;
		this->insert_c = &insert_c;
		this->insert_s = &insert_s;
		this->to_int = &to_int;
		this->split_s = &split_s;
		this->split_c = &split_c;
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