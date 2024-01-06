#include "binary_trees.h"

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