#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->parent);
		binary_tree_delete(tree->n);
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
	else
	{
		return;
	}
}
