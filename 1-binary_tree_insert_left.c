#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_node - Creates a new node with the given value and returns it.
* @parent: * The parent of the new node.
* @value: The value of the new node.
*
* Return: The newly malloc'd node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node = malloc(sizeof(binary_tree_t));

	if (tree_node == NULL || parent == NULL)
		return (NULL);

	tree_node->n = value;
	tree_node->parent = parent;
	tree_node->left = NULL;
	tree_node->right = NULL;

	if (parent->left != NULL)
		tree_node->left = parent->left;

	if (tree_node->left)
	{
		printf(" - - - - - \n");
		binary_tree_print(tree_node->left);
		printf(" - - - - - \n");
	}
	parent->left = tree_node;

	return (tree_node);
}
