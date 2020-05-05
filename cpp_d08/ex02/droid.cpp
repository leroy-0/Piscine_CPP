//
// droid.cpp for Project-Master in /home/tekm/tek1/cpp_d08/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 11 11:16:17 2017 leroy_0
// Last update Wed Jan 11 11:16:17 2017 leroy_0
//

#include 	<iostream>
#include 	<string>
#include	"droid.hh"

Droid::Droid(const std::string &serial) : Attack(25), Toughness(15)
{
	this->Id = serial;
	this->Energy = 50;
	this->Status = new std::string("Standing by");
	this->BattleData = new DroidMemory;

	std::cout << "Droid '" << this->Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &k) : Attack(25), Toughness(15)
{
	this->Id = k.getId();
	this->Energy = 50;
	this->Status = new std::string(* k.getStatus());
	this->BattleData = k.getBattleData();

	std::cout << "Droid '" << this->getId() << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
	std::cout << "Droid '" << this->Id << "' Destroyed" << std::endl;	
}

std::string 		Droid::getId() const
{
	return (this->Id);
}

void		 		Droid::setId(std::string Id)
{
	this->Id = Id;
}

size_t 				Droid::getEnergy() const
{
	return (this->Energy);
}

void		 		Droid::setEnergy(size_t Energy)
{
	this->Energy = Energy;
}

size_t 				Droid::getAttack() const
{
	return (this->Attack);
}

size_t 				Droid::getToughness() const
{
	return (this->Toughness);
}

std::string 		*Droid::getStatus() const
{
	return (this->Status);
}

void		 		Droid::setStatus(std::string *Status)
{
	this->Status = Status;
}

DroidMemory			*Droid::getBattleData() const
{
	return (this->BattleData);
}

void				Droid::setBattleData(DroidMemory *BattleData)
{
	this->BattleData = BattleData;
}

std::ostream& 		operator<<(std::ostream& os, Droid const & d)
{
	os << "Droid '" << d.getId() << "', " << d.getStatus()->c_str() <<  ", " << d.getEnergy();
	return (os);
}

Droid&				operator<<(Droid & a, size_t & Durasel)
{
	size_t			diff = 100 - a.getEnergy();

	a.setEnergy(a.getEnergy() + Durasel);

	if (a.getEnergy() > 100)
		a.setEnergy(100);

	if (diff > Durasel)
		Durasel = 0;
	else
		Durasel -= diff;
	
	return (a);
}

void		 		Droid::operator=(const Droid &b)
{
	this->setId(b.getId());
	this->setEnergy(50);
	this->setStatus(new std::string(* b.getStatus()));
	this->setBattleData(b.getBattleData());
}

bool		 		Droid::operator==(const Droid &b) const
{
	if (this->getStatus()->compare(b.getStatus()->c_str()) == 0)
		return (true);
	return (false);
}

bool		 		Droid::operator!=(const Droid &b) const
{
	if (this->getStatus()->compare(b.getStatus()->c_str()) == 0)
		return (false);
	return (true);
}

bool				Droid::operator()(const std::string *task, const size_t Exp)
{
	std::string 	tmp;

	if (this->getBattleData()->getExp() >= Exp)
	{
		if (this->getEnergy() <= 10)
		{
			this->setStatus(new std::string("Battery Low"));
			this->setEnergy(0);
			return (false);
		}
		tmp = (*task) + " - Completed!";
		this->setStatus(new std::string(tmp.c_str()));
		this->getBattleData()->setExp(this->getBattleData()->getExp() + (Exp / 2));
		this->setEnergy(this->getEnergy() - 10);
		return (true);
	}
	tmp = (*task) + " - Failed!";
	this->setStatus(new std::string(tmp.c_str()));
	this->setEnergy(this->getEnergy() - 10);
	this->getBattleData()->setExp(this->getBattleData()->getExp() + Exp);
	return (false);
}