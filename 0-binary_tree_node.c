#include "binary_trees.h"

/**
* binary_tree_node - Creates a new node with the given value and returns it.
* @parent: The parent of the new node.
* @value: The value of the new node.
*
* Return: The newly malloc'd node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node;

	tree_node = malloc(sizeof(binary_tree_t));
	if (tree_node == NULL)
		return (NULL);

	tree_node->n = value;
	tree_node->parent = parent;
	tree_node->left = NULL;
	tree_node->right = NULL;

	return (tree_node);
}
