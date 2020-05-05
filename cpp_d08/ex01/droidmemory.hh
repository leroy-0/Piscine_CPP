//
// droidmemory.hh for Project-Master in /home/tekm/tek1/cpp_d08/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 11 14:39:48 2017 leroy_0
// Last update Wed Jan 11 14:39:48 2017 leroy_0
//

#ifndef	__DROIDMEMORY_H_
#define	__DROIDMEMORY_H_

#include 	<iostream>
#include 	<cstdlib>
#include 	<string>
#include	"droid.hh"

class DroidMemory
{
	public:
		size_t 			getFingerPrint() const;
		void			setFingerPrint(const size_t);
		size_t 			getExp() const;
		void 			setExp(const size_t);

		DroidMemory&	operator+=(const size_t x);
		DroidMemory&	operator+=(const DroidMemory &);

		DroidMemory();
		~DroidMemory();

	private:
		size_t 		FingerPrint;
		size_t 		Exp;	
};

DroidMemory&		operator<<(DroidMemory &, const DroidMemory &);
DroidMemory&		operator>>(const DroidMemory &, DroidMemory &);

DroidMemory 		operator+(const DroidMemory &, const size_t &);
DroidMemory 		operator+(const DroidMemory &, const DroidMemory &);

std::ostream& 		operator<<(std::ostream&, const DroidMemory &);

#endif