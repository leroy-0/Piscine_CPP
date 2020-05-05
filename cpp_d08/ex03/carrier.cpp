//
// carrier.cpp for Project-Master in /home/tekm/tek1/cpp_d08/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 11 20:58:50 2017 leroy_0
// Last update Wed Jan 11 20:58:50 2017 leroy_0
//

#include 	<iostream>
#include 	<cstdlib>
#include 	<string>
#include	"droid.hh"
#include 	"droidmemory.hh"
#include 	"carrier.hh"

Carrier::Carrier(const std::string Id) : Id(Id), Energy(300), Attack(100), Toughness(90), Speed(0)
{
    for (int i = 0; i < 5; i++)
        this->Droids[i] = NULL;
}

Carrier::~Carrier()
{
    for (int i = 0; i < 5; i++)
    {
        if (this->Droids[i])
            delete (this->Droids[i]);
    }
}

std::string Carrier::getId() const
{
    return (Id);
}

void 		Carrier::setId(const std::string x)
{
    this->Id = x;
}

size_t 		Carrier::getEnergy() const
{
    return (this->Energy);
}

void 		Carrier::setEnergy(const size_t x)
{
    if (x > 600)
        this->Energy = 600;
    else
	    this->Energy = x;
}

size_t 		Carrier::getAttack() const
{
    return (this->Attack);
}

size_t 		Carrier::getToughness() const
{
    return (this->Toughness);
}

size_t 		Carrier::getSpeed() const
{
    return (this->Speed);
}

void 		Carrier::setSpeed(const size_t x)
{
    this->Speed = x;
}

Carrier& 	Carrier::operator<<(Droid*& droid)
{
	for (int i = 0; i < 5; i++)
	{
		if (!this->Droids[i])
		{
			this->Droids[i] = droid;
			droid = NULL;
			this->operator~();
			return (*this);
		}
	}
	return (*this);
}

Carrier& 	Carrier::operator>>(Droid*& droid)
{
	for (int i = 0; i < 5; i++)
	{
		if (this->Droids[i])
		{
			droid = this->Droids[i];
			this->Droids[i] = NULL;
			this->operator~();
			return (*this);
		}
	}
	return (*this);
}

Droid*& 	Carrier::operator[](unsigned int const x)
{
    return (this->Droids[x]);
}

Droid* 		Carrier::operator[](unsigned int const x) const
{
    return (this->Droids[x]);
}

Carrier&	Carrier::operator~()
{
	this->Speed = 0;
	for (int i = 0; i < 5; i++)
	{
		if (this->Droids[i])
			this->Speed += 10;
	}
	this->Speed = 100 - this->Speed;
	return (*this);
}

bool 		Carrier::operator()(int x, int y)
{
	size_t 	z;
	int 	total = 0;
	int 	i = 0;

	while (i < 5)
	{
		if (this->Droids[i])
			total++;
		i++;
	}

	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;

	z = (x + y) * (10 + total);

	if (this->getEnergy() < z || this->getSpeed() == 0)
		return (false);

	this->setEnergy(this->getEnergy() - z);
	return (true);
}

std::ostream& 	operator<<(std::ostream& os, const Carrier & carrier)
{
	os << "Carrier '" << carrier.getId() << "' Droid(s) on-board:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (carrier.Droids[i])
			os << "[" << i << "] : " << "Droid '" << carrier.Droids[i]->getId() << "', " << carrier.Droids[i]->getStatus()->c_str() <<  ", " << carrier.Droids[i]->getEnergy() << std::endl;
		else
			os << "[" << i << "] : " << "Free" << std::endl;
	}
	os << "Speed : " << carrier.getSpeed() << ", Energy " << carrier.getEnergy();
	return (os);
}