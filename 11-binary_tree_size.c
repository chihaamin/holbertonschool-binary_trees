#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * This function calculates the size of the binary tree, defined as the
 * number of nodes in the tree. If the tree is empty, it returns 0.
 *
 * Return: The size of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	/* Count the current node */
	size = 1;

	/* Recursively count the left subtree */
	size += binary_tree_size(tree->left);

	/* Recursively count the right subtree */
	size += binary_tree_size(tree->right);

	return (size);
}
