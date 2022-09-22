#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

typedef struct binary_tree_s 
{
	int n;
	binary_tree_s *root;
	binary_tree_s *left;
	binary_tree_s *right;

} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
