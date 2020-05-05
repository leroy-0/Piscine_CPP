/*
** KreogCom.h for Project-Master in /home/tekm/tek1/cpp_d07a/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Tue Jan 10 20:03:15 2017 leroy_0
** Last update Tue Jan 10 20:03:15 2017 leroy_0
*/

#ifndef		_KREOGCOM_H_
#define 	_KREOGCOM_H_

class KreogCom
{
	public:
		KreogCom(int x, int y, int serial);
		~KreogCom();

	public:
		void 		addCom(int x, int y, int serial);
		KreogCom 	*getCom() const;
		void 		removeCom();

	public:
		void 	ping() const;
		void 	locateSquad() const;

	private:
		int		_x;
		int		_y;

	private:
		KreogCom *_next;

	private:
		const int m_serial;
};

#endif		/* _KREOGCOM_H_ */