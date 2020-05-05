/*
** sickkoala.h for Project-Master in /home/tekm/tek1/cpp_d06/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Mon Jan  9 14:43:35 2017 leroy_0
** Last update Mon Jan  9 14:43:37 2017 leroy_0
*/

#ifndef __SICKKOALA_H_
#define __SICKKOALA_H_

class SickKoala
{
	public:
		void	poke();
		bool	takeDrug(std::string);
		void	overDrive(std::string);

		std::string name;
		
		SickKoala(std::string);
		~SickKoala();
};

#endif 	/* ! __SICKKOALA_H_ */