/*
** bitmap.h for Project-Master in /home/tekm/tek1/cpp_d01/ex02
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Wed Jan  4 18:43:50 2017 leroy_0
** Last update Thu Jan  5 01:47:06 2017 leroy_0
*/

#ifndef         BMP_H_
# define        BMP_H_

#include	<stdint.h>

typedef struct  t_bmp_header
{
  uint16_t        magic;
  uint32_t        size;
  uint16_t        _app1;
  uint16_t        _app2;
  uint32_t        offset;
} __attribute__ ((packed)) t_bmp_header;

typedef struct t_bmp_info_header
{
  uint32_t         size;
  int32_t          width;
  int32_t	         height;
  uint16_t	       planes;
  uint16_t         bpp;
  uint32_t         compression;
  uint32_t         row_data_size;
  int32_t          h_resolution;
  int32_t          v_resolution;
  uint32_t         palette_size;
  uint32_t	       important_colors;
} __attribute__ ((packed)) t_bmp_info_header;

void            make_bmp_header(t_bmp_header *bmp, size_t size);
void            make_bmp_info_header(t_bmp_info_header *bmp, size_t size);

#endif
