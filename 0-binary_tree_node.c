
#include "binary_trees.h"

/**
 * struct binary_tree_s - binary tree definition
 * @n: integer
 * @root: points to the root node
 * @left: points to the left child
 * @right: points to the right child
 *
 * Description: binary tree node structure
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		/* if malloc is not successful*/
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
}
