#include "binary_trees.h"

/**
 * tree_height - Node Height
 *
 * @tree: Tree To Be Passed
 * Return: Height
 */

int tree_height(const binary_tree_t *tree)
{
	int L_Height = 0, R_Height = 0;

	if (!tree)
		return (0);

	L_Height = 1 + tree_height(tree->left);
	R_Height = 1 + tree_height(tree->right);

	return (L_Height > R_Height ? L_Height : R_Height);
}

/**
 * binary_tree_balance - Balance Factor Calc
 * @tree: Tree To Be Passed
 * Return: Balance Factor Num
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
