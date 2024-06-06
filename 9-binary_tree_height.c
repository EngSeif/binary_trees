#include "binary_trees.h"

/**
 * binary_tree_height - Move PostOrder
 *
 * @tree: Tree To Be Passed
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t L_Height = 0, R_Height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		L_Height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		R_Height = 1 + binary_tree_height(tree->right);

	return (L_Height > R_Height ? L_Height : R_Height);
}
