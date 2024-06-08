#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is leaf
 * @node: Pointer to the tree
 * Return: Returns intger value of 0 (tree) or 1 (leaf)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
