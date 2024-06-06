#include "binary_trees.h"

/**
 * binary_tree_postorder - Move PostOrder
 *
 * @tree: Tree To Be Passed
 * @func: func Used To Print
 * Return: NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (!(tree->left) || !(tree->right))
	{
		func(tree->n);
		return;
	}

	if (tree->left)
		binary_tree_postorder(tree->left, func);

	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
