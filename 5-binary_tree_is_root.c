#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if node is root.
* @node: Pointer to node to check.
*
* Return: 1 if node is root 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

	return (0);
}
