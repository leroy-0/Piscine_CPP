//
// Borg.hh for Project-Master in /home/tekm/tek1/cpp_d07m/ex01
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 12:07:17 2017 leroy_0
// Last update Tue Jan 10 12:07:18 2017 leroy_0
//

#ifndef __BORG_HH_
#define __BORG_HH_

#include "Federation.hh"

namespace Borg
{
	class Ship
	{
		public:
			void 	setupCore(class WarpSystem::Core *);
			void	checkCore();

			bool	move(int, Destination);
			bool	move(int);
			bool	move(Destination);
			bool	move();

			Ship();
			~Ship();
		
		int			_side;
		short		_maxWarp;
		Destination	_location;
		Destination	_home;

		class WarpSystem::Core *_core;
	};
};

#endif 	/* __BORG_HH_ */