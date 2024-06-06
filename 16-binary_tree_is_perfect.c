#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - PerfecT tree
 * @tree: Tree To Be Passed
 * Return: if Perfect 1 else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int b, f;

	if (!tree)
		return (0);

	b = binary_tree_balance(tree);
	f = binary_tree_is_full(tree);

	return (f && !(b));
}
