/*
** Exo-1.h for Project-Master in /home/tekm/tek1/cpp_d09/ex-1
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan 12 10:27:00 2017 leroy_0
** Last update Thu Jan 12 10:27:00 2017 leroy_0
*/

#ifndef 	__EXO_1_H_
#define 	__EXO_1_H_

typedef struct s_cthulhu
{
    char 	*m_name;
    int 	m_power;

    void 	(*Attack)(struct s_cthulhu *);
    void 	(*Sleeping)(struct s_cthulhu *);
    void 	(*PrintPower)(struct s_cthulhu *);

    void 	(*CthulhuInitializer)(struct s_cthulhu *);
} 				t_cthulhu;

t_cthulhu	*NewCthulhu();

typedef struct s_koala
{
    t_cthulhu 	m_parent;
    char 		m_isALegend;

    void 		(*Eat)(struct s_koala	*_this);
    void 		(*KoalaInitializer)(struct s_koala *this, char *_name, char _isALegend);

} 				t_koala;

t_koala			*NewKoala(char	*name, char _isALegend);

#endif 	/* __EXO_1_H_ */