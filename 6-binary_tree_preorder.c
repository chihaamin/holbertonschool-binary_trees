#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree in pre-order.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * This function visits the current node first, then recursively visits
 * the left subtree, followed by the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Visit the current node */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
