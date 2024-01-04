#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 * a node as the right-child of another node
 * @parent: A pointer to the parent of the node.
 * @value: The value of the new node.
 *
 * Return: a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
