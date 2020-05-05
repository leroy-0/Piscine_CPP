//
// droid.hh for Project-Master in /home/tekm/tek1/cpp_d08/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 11 11:16:14 2017 leroy_0
// Last update Wed Jan 11 11:16:14 2017 leroy_0
//

#ifndef	__DROID_H_
#define	__DROID_H_

#include 	<iostream>
#include 	<cstdlib>
#include 	<string>
#include	"droidmemory.hh"

class Droid
{
	public:
		std::string 		getId() const;
		void		 		setId(const std::string);
		size_t 				getEnergy() const;
		void		 		setEnergy(const size_t);
		size_t 				getAttack() const;
		size_t 				getToughness() const;
		std::string 		*getStatus() const;
		void		 		setStatus(std::string *);

		void		 		operator=(const Droid &);
		bool		 		operator==(const Droid &) const;
		bool		 		operator!=(const Droid &) const;

		bool				operator()(const std::string *Status, const size_t Exp);

		class DroidMemory	*getBattleData() const;
		void				setBattleData(class DroidMemory *);

		Droid(const Droid &);
		Droid(const std::string &);
		~Droid();

	private:
		std::string 	Id;
		size_t 			Energy;
		size_t const	Attack;
		size_t const 	Toughness;
		std::string 	*Status;

		class DroidMemory 	*BattleData;
};

std::ostream& 		operator<<(std::ostream&, const Droid &);
Droid&				operator<<(Droid &, size_t &);

#endif