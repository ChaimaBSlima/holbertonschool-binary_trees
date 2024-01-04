#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node.
 *
 * Return:  1 if the node is a root else 0
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
