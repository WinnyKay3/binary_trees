#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: pointer to the node to insert right child
 * @value: value to store the new node
 *
 * Return: if parent is NULL or an error occur -NULL
 * otherwise pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
