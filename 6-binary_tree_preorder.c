#include "binary_trees.h"

/**
* binary_tree_preorder - Apply a function to every node in a binary tree
* @tree: Pointer to the tree to traverse
* @func: Function to apply to every
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
