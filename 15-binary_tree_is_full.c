#include "binary_trees.h"

/**
* is_full_recursive - Checks whether the binary tree is full or not.
* @tree: * Pointer to the tree to check.
*
* Return: 1 if full 0 otherwise
*/
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			is_full_recursive(tree->left) == 0 ||
			is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
* binary_tree_is_full - Determines whether the tree is full or not.
* @tree: * Pointer to a binary tree.
*
* Return: Non - zero if the tree is full zero otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
