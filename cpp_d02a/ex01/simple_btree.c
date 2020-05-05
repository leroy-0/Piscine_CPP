/*
** simple_btree.c for Project-Master in /home/tekm/tek1/cpp_d02a/ex01
** 
** Made by leroy_0
** Login   <leroy_0@epitech.eu>
** 
** Started on  Thu Jan  5 19:39:23 2017 leroy_0
** Last update Thu Jan  5 19:39:23 2017 leroy_0
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "simple_btree.h"

t_bool 	btree_is_empty(t_tree tree)
{
	if (tree == NULL)
		return (TRUE);
	else
		return (FALSE);
}

unsigned int 	btree_get_size(t_tree tree)
{
	unsigned int	x = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		x += btree_get_size(tree->left);
	if (tree->right != NULL)
		x += btree_get_size(tree->right);

	x++;
	return (x);
}

unsigned int btree_get_depth(t_tree tree)
{
  	int		left;
  	int		right;

  	if (tree == NULL)
    	return (0);

  	if ((left = btree_get_depth(tree->left)) > (right = btree_get_depth(tree->right)))
  		return (left + 1);

	return (right + 1);
}

t_bool 	btree_create_node(t_tree *node_ptr, double value)
{
	if (*node_ptr == NULL)
	{
		if ((*node_ptr = malloc(sizeof(t_node))) == NULL)
			return (FALSE);
	}

	(*node_ptr)->value = value;
	(*node_ptr)->left = NULL;
	(*node_ptr)->right = NULL;

	return (TRUE);
}

t_bool 	btree_delete(t_tree *root_ptr)
{
	if (!(*root_ptr))
		return (FALSE);

	btree_delete(&(*root_ptr)->left);
	btree_delete(&(*root_ptr)->right);

	free((*root_ptr)->left);
	free((*root_ptr)->right);

	(*root_ptr) = NULL;

	return (TRUE);
}

double btree_get_max_value(t_tree tree)
{
	if (tree == NULL)
    	return (0);

    double	right;
    double	left;
    double  max = tree->value;

    if (tree->left && (left = btree_get_max_value(tree->left)) > max)
        max = left;

    if (tree->right && (right = btree_get_max_value(tree->right)) > max)
        max = right;
    return (max);
}

double btree_get_min_value(t_tree tree)
{
	if (tree == NULL)
    	return (0);

    double	right;
    double	left;
    double  min = tree->value;

    if (tree->left && (left = btree_get_min_value(tree->left)) < min)
        min = left;

    if (tree->right && (right = btree_get_min_value(tree->right)) < min)
        min = right;
    return (min);
}