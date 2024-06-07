#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node
 * @parent: Pointer to the parent node
 * @value: Value to be assigned to new node
 * Return: Pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
