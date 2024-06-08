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
		tree->parent;
		tree->left;
		tree->right;
		free(tree);
	}
	else
	{
		return;
	}
}
