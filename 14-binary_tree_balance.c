#include "binary_trees.h"

/**
 * binary_tree_balance - Balance Factor Calc
 * @tree: Tree To Be Passed
 * Return: Balance Factor Num
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int L_Height = 0, R_Height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		L_Height = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		R_Height = 1 + binary_tree_balance(tree->right);
	return (L_Height - R_Height);
}
