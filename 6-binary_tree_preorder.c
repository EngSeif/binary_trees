#include "binary_trees.h"

/**
 * binary_tree_preorder - Move PreOrder
 *
 * @tree: Tree To Be Passed
 * @func: func Used To Print
 * Return: NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
