#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree node.
 * @tree: Pointer to the node to measure the depth.
 *
 * This function calculates the depth of a node in a binary tree, defined as
 * the number of edges from the node to the root node. If the node is NULL,
 * it returns 0.
 *
 * Return: The depth of the node, or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	/* Traverse up the tree to find the depth */
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
