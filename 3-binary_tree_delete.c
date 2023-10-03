#include "binary_trees.h"

/**
 * binary_tree_delete- function to delete entire tree
 * @tree: pointer to tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
