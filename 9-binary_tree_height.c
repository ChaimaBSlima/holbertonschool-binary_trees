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
