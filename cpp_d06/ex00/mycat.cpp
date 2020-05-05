//
// mycat.cpp for Project-Master in /home/tekm/tek1/cpp_d06/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Mon Jan  9 11:53:30 2017 leroy_0
// Last update Mon Jan  9 11:53:38 2017 leroy_0
//

#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char **av)
{
	int	x = 1;

	if (ac < 2)
	{
		std::cerr << "my_cat" << ": Usage: " << av[0] << " file [...]" << std::endl;
		return (84);
	}

	while (av[x])
	{
		std::ifstream content(av[x]);
		if (content)
			std::cout << content.rdbuf();
		else
			std::cerr << "my_cat" << ":" << " <" << av[x] << " >: No such file or directory" << std::endl;
		x++;
	}
	return (0);
}