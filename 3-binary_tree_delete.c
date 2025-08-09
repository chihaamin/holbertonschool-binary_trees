#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * This function recursively deletes all nodes in the binary tree,
 * starting from the leaves up to the root.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* Recursively delete the left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
