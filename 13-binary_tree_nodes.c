#include "binary_trees.h"

/**
 * binary_tree_nodes - With at least one child
 * @tree: Tree To Be Passed
 * Return: Leaves Number
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
