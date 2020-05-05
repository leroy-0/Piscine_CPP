/*
** bitmap_header.c for Project-Master in /home/tekm/tek1/cpp_d01/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 18:43:59 2017 leroy_0
** Last update Wed Jan  4 21:45:20 2017 leroy_0
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<fcntl.h>
#include	"bitmap.h"

void		make_bmp_header(t_bmp_header *bmp, size_t size)
{
  bmp->magic = 0x4D42;
  bmp->size = (((size * size) * 32) / 8) + 54;
  bmp->_app1 = 0;
  bmp->_app2 = 0;
  bmp->offset = 54;
}

void		make_bmp_info_header(t_bmp_info_header *bmp, size_t size)
{
  bmp->size = 40;
  bmp->width = size;
  bmp->height = size;
  bmp->planes = 1;
  bmp->bpp = 32;
  bmp->compression = 0;
  bmp->row_data_size = ((size * size) * 32) / 8;
  bmp->h_resolution = 0;
  bmp->v_resolution = 0;
  bmp->palette_size = 0;
  bmp->important_colors = 0;  
}
