#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node.
 *
 * Return: the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftt = 0, rightt = 0;

		if (tree->left)
			leftt = 1 + binary_tree_height(tree->left);
		else
			leftt = 0;

		if (tree->right)
			rightt = 1 + binary_tree_height(tree->right);
		else
			rightt = 0;

		if (leftt > rightt)
			return (leftt);
		else
			return (rightt);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance;

	if (tree)
	{
		balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
		return (balance);
	}

	return (0);
}
