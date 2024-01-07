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

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node.
 *
 * Return: the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_get_leaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *binary_tree_get_leaf(const binary_tree_t *tree)
{
    if (binary_tree_is_leaf(tree) == 1)
        return (tree);
    else
    {
        if (tree->left)
            return (binary_tree_get_leaf(tree->left));
    
        else
            return (binary_tree_get_leaf(tree->right));
    }
}

/**
 * recursion - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: current node.
 *
 * Return:  1 or 0.
 */
int recursion(const binary_tree_t *tree,
			  size_t leaf_depth, size_t current)
{
	if (binary_tree_is_leaf(tree))
		return (current == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (recursion(tree->left, leaf_depth, current + 1) &&
			recursion(tree->right, leaf_depth, current + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node.
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recursion(tree, binary_tree_depth(binary_tree_get_leaf(tree)), 0));
}
