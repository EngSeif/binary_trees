#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create A new Node ANd insert to left
 *
 * @parent: Parent of new node
 * @value: value stored in the new node
 * Return: New Node or Null if Fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (!(parent->left))
	{
		parent->left = Node;
	}
	else
	{
		parent->left->parent = Node;
		Node->left = parent->left;
		parent->left = Node;
	}
	return (Node);
}
