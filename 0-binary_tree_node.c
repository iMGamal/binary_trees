#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_t - Creates a new node
 * @parent: Pointer to the parent node
 * @value: Value to be assigned to new node
 * Return: Returns a pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	int x;

	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	printf("");
	scanf("%d", &x);
	if (x == -1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = x;
	newnode->left = create();
	newnode->right = create();
	return (newnode);
}
