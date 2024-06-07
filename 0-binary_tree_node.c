#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/*
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct node
	{
		int x;
		struct node *parent;
		struct node *left;
		struct node *right;
	};

	parent = (struct node *)malloc(sizeof(struct node));
	if (node == NULL)
	{
		return (NULL);
	}
	node->x = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (parent);
}
