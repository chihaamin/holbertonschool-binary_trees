#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * This function counts the number of leaf nodes in a binary tree. A leaf
 * node is defined as a node that does not have any children (both left and
 * right pointers are NULL). If the tree is empty, it returns 0.
 *
 * Return: The number of leaves in the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	/* If the node is a leaf, count it */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively count leaves in the left subtree */
	leaves += binary_tree_leaves(tree->left);

	/* Recursively count leaves in the right subtree */
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
