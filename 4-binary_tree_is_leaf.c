#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node.
 *
 * Return: 1 if the node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
