#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
typedef struct node
{
	int data;

	struct node *left, *right;
} node;

node *root();

int main(void)
{
	node *create;
	create = root();
	return (0);
}

node *root()
{
	int x;

	node *new;

	new = (node *)malloc(sizeof(node));
	if (new == NULL)
	{
		printf("Memory allocation failed");
		return (NULL);
	}
	printf("");
	scanf("%d", &x);
	if (x == -1)
	{
		free(new);
		return (NULL);
	}
	new->data = x;
	printf("Enter left child of %d\n", x);
	new->left = root();
	printf("Enter right child of %d\n", x);
	new->right = root();
	return (new);
}
