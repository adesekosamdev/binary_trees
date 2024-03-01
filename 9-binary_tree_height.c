#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the node
 * Return: height of the tree from node
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	right = binary_tree_height(tree->right) + 1;
	left = binary_tree_height(tree->left) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
