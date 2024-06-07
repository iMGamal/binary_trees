#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *left, *right;
} node;

struct node *create();

int main()
{
	struct node *root;
	root = create();
	return (0);
}

struct node *create()
{
	int x;
	struct node *newnode;

	newnode = (struct node *)malloc(sizeof(struct node));
	if (newnode == NULL)
	{
		printf("Memory allocation failed\n");
		exit (1);
	}
	printf("Enter data\n");
	scanf("%d", &x);
	if (x == -1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->data = x;
	printf("Enter left child of %d\n", x);
	newnode->left = create();
	printf("Enter right child of %d\n", x);
	newnode->right = create();
	return (newnode);
}
