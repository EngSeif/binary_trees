#include "binary_trees.h"

/**
 * binary_tree_is_root - if a node is root
 *
 * @node: Tree To Be Checked
 * Return: 1 if root - 0 if Not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->parent))
		return (1);
	return (0);
}
