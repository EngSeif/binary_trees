#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create A new Node ANd insert to right
 *
 * @parent: Parent of new node
 * @value: value stored in the new node
 * Return: New Node or Null if Fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Node = NULL;

	Node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);

	if (!Node)
		return (NULL);

	Node->parent = parent;
	Node->n = value;
	Node->left = NULL;
	Node->right = NULL;

	if (!(parent->right))
	{
		parent->right = Node;
	}
	else
	{
		Node->right = parent->right;
		parent->right->parent = Node;
		parent->right = Node;
	}
	return (Node);
}
