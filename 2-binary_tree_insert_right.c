#include "binary_trees.h"


/**
 * binary_tree_insert_right - Inserts a new node to the right of the parent
 * @parent: The parent of the new node
 * @value: The value to be inserted
 *
 * Return: The new node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node = NULL;

	if (parent != NULL)
		tree_node = binary_tree_node(parent, value);
	if (tree_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tree_node->right = parent->right;
		tree_node->right->parent = tree_node;
	}

	parent->right = tree_node;

	return (tree_node);
}
