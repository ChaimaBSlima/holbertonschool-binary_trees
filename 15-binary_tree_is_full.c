#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node.
 *
 * Return: 1 or 0
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	const binary_tree_t *current;
	const binary_tree_t *stack[1000];
	int top = -1;

	stack[++top] = tree;

	while (top >= 0)
	{
		current = stack[top--];
		if ((current->left != NULL && current->right == NULL) ||
			(current->left == NULL && current->right != NULL))
		{
			return (0);
		}

		if (current->left != NULL)
			stack[++top] = current->left;
		if (current->right != NULL)
			stack[++top] = current->right;
	}
	return (1);
}
