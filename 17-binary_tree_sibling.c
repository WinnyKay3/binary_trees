#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling node
 * @node: pointer to the node to find
 *
 * Return: if node if NULL or no sibling - NULL
 * otherwise pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
