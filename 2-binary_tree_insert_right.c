#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node at the right
 * @parent: points to the parent of the new node
 * @value: integer to store in node
 *
 * Return: NULL - if the creation fails
 *	   New node pointer if it succeeds
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		/* if malloc is not successful*/
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}

