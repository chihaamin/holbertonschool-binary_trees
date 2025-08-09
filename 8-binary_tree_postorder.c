#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree in post-order.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * This function visits the left subtree first, then the right subtree,
 * followed by the current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Visit the current node */
	func(tree->n);
}
