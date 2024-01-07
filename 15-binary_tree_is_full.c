#include "binary_trees.h"

/**
 * recursion - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node.
 *
 * Return: 1 or 0.
 */
int recursion(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		     recursion(tree->left) == 0 ||
		     recursion(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node.
 *
 * Return: 1 or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recursion(tree));
}
