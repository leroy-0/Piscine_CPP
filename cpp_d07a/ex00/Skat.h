//
// Skat.hh for Project-Master in /home/tekm/tek1/cpp_d07a/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 16:12:41 2017 leroy_0
// Last update Tue Jan 10 16:12:41 2017 leroy_0
//

#ifndef __SKAT_H_
#define __SKAT_H_

class Skat
 {
	public:
		Skat(std::string const& name = "bob", int stimPaks = 15);
		~Skat();

	public:
		int					&stimPaks();
		const std::string& 	name();

	public:
		void shareStimPaks(int number, int& stock);
		void addStimPaks(unsigned int number);
		void useStimPaks();

	public:
		void status();

	private:
		std::string const& 	_name;
		int 				_stimPaks;
};

#endif	/* __SKAT_H_ */