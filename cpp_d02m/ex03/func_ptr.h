/*
** func_ptr.h for Project-Master in /home/tekm/tek1/cpp_d02m/ex03
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 11:04:36 2017 leroy_0
** Last update Thu Jan  5 11:04:37 2017 leroy_0
*/

#ifndef FUNC_PTR_H_                                                        
# define FUNC_PTR_H_                                                       

#include "func_ptr_enum.h"
                                                                    
typedef struct  s_ptr                                                                                 
{                                                                                                        
  t_action				built;                                                                                 
  void         			(*fnc)(char *str);                                                         
}               t_ptr;                                                     
                                                                                
#endif /* FUNC_PTR_H_ */  