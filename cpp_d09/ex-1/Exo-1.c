/*
** Exo-1.c for Project-Master in /home/tekm/tek1/cpp_d09/ex-1
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan 12 10:27:12 2017 leroy_0
** Last update Thu Jan 12 10:27:12 2017 leroy_0
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Exo-1.h"

void 	Attack(t_cthulhu *this)
{
	if (this->m_power >= 42)
	{
		printf("%s attacks and destroys the city\n", this->m_name);
		this->m_power -= 42;
	}
	else
	{
		printf("%s can't attack, he doesn't have enough power\n", this->m_name);
	}
}

void 	Sleeping(t_cthulhu *this)
{
	this->m_power += 42000;
	printf("%s sleeps\n", this->m_name);
}

void 	PrintPower(t_cthulhu *this)
{
	printf("Power => %d\n", this->m_power);
}

static 		void CthulhuInitializer(t_cthulhu* this)
{
	printf("----\n");
	printf("Building Cthulhu\n");

	this->m_name = strdup("Cthulhu");
    this->m_power = 42;
	this->Attack = &Attack;
	this->Sleeping = &Sleeping;
	this->PrintPower = &PrintPower;
}

t_cthulhu	*NewCthulhu()
{
	t_cthulhu 	*cthulhu;

	cthulhu = malloc(sizeof(t_cthulhu));
	cthulhu->CthulhuInitializer = &CthulhuInitializer;
	cthulhu->CthulhuInitializer(cthulhu);
	return (cthulhu);
}

void		Eat(t_koala *this)
{
	this->m_parent.m_power += 42;
	printf("%s eats\n", this->m_parent.m_name);
}

static void 	KoalaInitializer(t_koala *this, char *_name, char _isALegend)
{
	this->m_isALegend = _isALegend;
	this->m_parent = *NewCthulhu();
	this->m_parent.m_name = _name;
	this->Eat = &Eat;
	this->m_isALegend = _isALegend;

	if (this->m_isALegend == 0)
		this->m_parent.m_power = 0;

	printf("Building %s\n", this->m_parent.m_name);
}

t_koala 	*NewKoala(char *name, char _isALegend)
{
	t_koala 	*koala;

	koala = malloc(sizeof(t_koala));
	koala->KoalaInitializer = &KoalaInitializer;
	koala->KoalaInitializer(koala, name, _isALegend);
	return (koala);
}