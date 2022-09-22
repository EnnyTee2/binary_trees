#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - binary tree definition
 * @n: integer
 * @parent: points to the root node
 * @left: points to the left child
 * @right: points to the right child
 *
 * Description: binary tree node structure
 *
 */

typedef struct binary_tree_s 
{
	int n;
	binary_tree_s *parent;
	binary_tree_s *left;
	binary_tree_s *right;

} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
