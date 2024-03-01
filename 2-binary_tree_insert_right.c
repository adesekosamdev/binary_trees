#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node in the binary tree (right)
 * @parent: pointer to a parent node
 * @value: number value in the node
 * Return: pointer to the new node inserted
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *node;

	if (!parent)
		return (NULL);
	temp = parent->right;
	node = binary_tree_node(parent, value);
	parent->right = node;
	if (temp != NULL)
	{
		node->right = temp;
		temp->parent = node;
	}
	return (node);
}
