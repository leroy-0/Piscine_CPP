//
// ex05.hpp for Project-Master in /home/tekm/tek1/cpp_d15/ex05
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 18 12:49:45 2017 leroy_0
// Last update Wed Jan 18 12:49:46 2017 leroy_0
//

#ifndef __EX05_HPP_
#define __EX05_HPP_

#include <string>
#include <iostream>
#include <cstring>

template <typename T>
void 		my_type(T x)
{
	std::cout << x;
}

void 		my_type(bool x)
{
	std::cout << std::boolalpha << x;
}

template <typename T>
class array
{
	public:
		template <typename U>
		array<U> 		convertTo(U converter(const T &))
		{
			array<U> 	newArray(_size);

			for (int i = 0; i < _size; i++)	
				newArray[i] = converter(_array[i]);

			return (newArray);
		}

		void 		dump() const
		{
			std::cout << "[";
			for (int i = 0; i < _size; ++i)
			{
				my_type(_array[i]);
				if (i + 1 != _size)
					std::cout << ", ";
			}
			std::cout << "]" << std::endl;
		}

		int 		size() const
		{
			return (_size);
		}

		T&		operator[](const int & nb) const
		{
			if (nb >= _size)
				throw std::exception();
			return (_array[nb]);
		}

		T&			operator[](const int & nb)
		{
			T 		*tmp = _array;
			int 	old_size = _size;

			if (nb >= _size)
			{
				_size = nb + 1;
				_array = new T[_size];
				for (int i = 0; i < _size; ++i)
				{
					if (i < old_size)
						_array[i] = tmp[i];
					else
						_array[i] = 0;
				}
				delete[] tmp;
			}
			return (_array[nb]);
		}

		array& 		operator=(const array<T> & new_array)
		{
			delete[] _array;

			_array = new T[new_array._size];
			_size = new_array._size;

			for (int i = 0; i < _size; ++i)
				_array[i] = new_array._array[i];
			
			return (*this);
		}

		array(const array & new_array)
		{
			_array = new T[new_array._size];
			_size = new_array._size;

			for (int i = 0; i < _size; ++i)
				_array[i] = new_array._array[i];
		}

		array(unsigned int n = 0) {
			_size = n;
			_array = new T[_size];

			for (int i = 0; i < _size; ++i)
				_array[i] = 0;
		}
		~array()
		{
			delete[] _array;
		};

	public:
		T 		*_array;
		int 	_size;
};

#endif 	/* __EX05_HPP_ */