#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height, leaves_count, nodes_count;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	leaves_count = binary_tree_leaves(tree);
	nodes_count = binary_tree_nodes(tree) + 1;

	return (leaves_count == (1 << left_height) &&
			nodes_count == (2 * leaves_count - 1));
}
