/*
** Parts.h for Project-Master in /home/tekm/tek1/cpp_d07a/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 10 18:28:38 2017 leroy_0
** Last update Tue Jan 10 18:28:41 2017 leroy_0
*/

#ifndef 	__PARTS_H_
#define 	__PARTS_H_

#include 	<string>

class Arms {
	private:
		std::string   	_serial;
		std::string		_className;
		bool  			_functionnal;

	public:
		Arms(std::string const & _serial = "A-01", bool _functionnal = true);
		~Arms();

		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
};

class Legs {
	private:
		std::string   	_serial;
		std::string		_className;
		bool  			_functionnal;

	public:
		Legs(std::string const & _serial = "L-01", bool _functionnal = true);
		~Legs();

		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
};

class Head {
	private:
		std::string   	_serial;
		std::string		_className;
		bool  			_functionnal;

	public:
		Head(std::string const & _serial = "H-01", bool _functionnal = true);
		~Head();

		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
};

#endif		/* __PARTS_H_ */