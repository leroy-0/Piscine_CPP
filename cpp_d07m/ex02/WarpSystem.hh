//
// WarpSystem.hh for Project-Master in /home/tekm/tek1/cpp_d07m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 10:14:24 2017 leroy_0
// Last update Tue Jan 10 10:14:24 2017 leroy_0
//

#ifndef __WARPSYSTEM_HH_
#define __WARPSYSTEM_HH_

namespace WarpSystem
{
	class QuantumReactor
	{
		public:
			bool 	isStable();
			void 	setStability(bool);

			QuantumReactor();
			~QuantumReactor();
		
		bool 	_stability;
	};

	class Core
	{
		public:
			QuantumReactor *checkReactor();

			Core(QuantumReactor *);
			~Core();
		
		QuantumReactor *_coreReactor;
	};
}

#endif 	/* __WARPSYSTEM_HH_ */