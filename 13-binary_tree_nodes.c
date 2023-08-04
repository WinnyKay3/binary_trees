#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child in tree
 * @tree: pointer to the root node
 *
 * Return: if tree if NULL, function should return 0
 * else node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
