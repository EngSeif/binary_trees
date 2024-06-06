#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - PerfecT tree
 * @tree: Tree To Be Passed
 * Return: if Perfect 1 else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, i;
	size_t size, max_nodes = 1;

	if (!tree)
		return (0);

	height = tree_height(tree);
	size = binary_tree_size(tree);

	for (i = 0; i < height; i++)
		max_nodes *= 2;

	return (max_nodes - 1 == size);
}
