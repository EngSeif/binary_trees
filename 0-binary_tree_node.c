#include "binary_trees.h"

/**
 * binary_tree_node - Create A new Node
 *
 * @parent: Parent of new node
 * @value: value stored in the new node
 * Return: New Node or Null if Fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Node = NULL;

	Node = malloc(sizeof(binary_tree_t));

	if (!Node)
		return (NULL);

	Node->parent = parent;
	Node->n = value;
	Node->left = NULL;
	Node->right = NULL;
	return (Node);
}
