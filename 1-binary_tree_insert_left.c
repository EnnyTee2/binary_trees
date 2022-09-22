#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node at the left
 * @parent: points to the parent of the new node
 * @value: integer to store in node
 *
 * Return: NULL - if the creation fails
 *	   New node pointer if it succeeds
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) or (parent == NULL)
	{
		/* if malloc is not successful*/
		return (NULL);
	}

	if (parent->left == NULL)
	{
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		parent->left = new_node;
	}
	else
	{
		temp = parent->left;
		new_node->n = value;
		new_node->left = temp;
		new_node->right = NULL;
		parent->left = new_node;
	}

	return (new_node);
}
