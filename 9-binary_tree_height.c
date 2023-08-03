#include "binary_trees.h"

/**
 * binary_tree_height - To measure height of b tree
 * @tree: pointer to root node of tree to measure
 *
 * Return: if tree is NULL, function must return 0,else
 * return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t k = 0, r = 0;

		k = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((k > r) ? k : r);
	}
	return (0);
}
