#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a new node to the left of the parent
 * @parent: The parent of the new node
 * @value: The value to be inserted
 *
 * Return: The new node or NULL if
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node = NULL;

	if (parent != NULL)
		tree_node = binary_tree_node(parent, value);
	if (tree_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tree_node->left = parent->left;
		tree_node->left->parent = tree_node;
	}

	parent->left = tree_node;

	return (tree_node);
}
