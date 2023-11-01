#include "binary_trees.h"

/**
* binary_tree_inorder - Applies func ( n ) to every node in tree
* @tree: Pointer to tree to operate on
* @func: Function to apply to every
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
