#include "binary_trees.h"

/**
* binary_tree_uncle - Returns the uncle node in the binary tree
* @node: pointer to the node to check
*
* Return: the uncle node in the binary
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
