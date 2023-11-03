#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
								 size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
* is_leaf - Returns 1 if the node is a leaf 0 otherwise.
* @node: Pointer to the node
*
* Return: 1 if the node is a leaf 0 otherwise
*/
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
* depth - Returns the depth of the tree.
* @tree: * Pointer to the tree to check.
*
* Return: The depth of the tree
*/
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
* get_leaf - Returns the leaf of a binary tree
* @tree: * Pointer to the tree to search
*
* Return: Pointer to the leaf or NULL if tree is
*/
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
* is_perfect_recursive - Returns true if the tree is perfectly balanced
* @tree: * Pointer to the tree to check
* @leaf_depth: Number of leaves in the tree
* @level: Current level of the tree
*
* Return: 1 if perfectly balanced 0
*/
int is_perfect_recursive(const binary_tree_t *tree,
								 size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			  is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
* binary_tree_is_perfect - Returns true if the tree is perfect.
* @tree: * Pointer to a binary tree.
*
* Return: 1 if perfect 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
