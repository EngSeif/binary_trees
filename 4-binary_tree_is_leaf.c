#include "binary_trees.h"

/**
 * binary_tree_is_leaf - if a node is a leaf
 *
 * @node: Tree To Be Checked
 * Return: 1 if lead - 0 if Not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
