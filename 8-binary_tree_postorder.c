#include "binary_trees.h"

/**
* binary_tree_postorder - Applies func ( n ) to every node in the binary tree
* @tree: Pointer to the tree to process
* @func: Function to apply to every
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
