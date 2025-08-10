#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * This function calculates the height of the binary tree, defined as the
 * number of edges on the longest path from the root node to a leaf node.
 * If the tree is empty, it returns 0.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	size_t height;

	if (!tree)
		return (0);

	/* Recursively find the height of the left subtree */
	left_height = binary_tree_height(tree->left);
	/* Recursively find the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the greater height plus one for the current node */
	height = left_height > right_height ? left_height : right_height;
	return (height + 1);
}
