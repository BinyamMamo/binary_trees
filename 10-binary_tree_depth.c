#include "binary_trees.h"

/**
* binary_tree_depth - Returns the depth of the tree.
* @tree: * Pointer to the tree to check.
*
* Return: The depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
