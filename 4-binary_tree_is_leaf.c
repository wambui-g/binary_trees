#include "binary_lists.h"

/**
 * binary_tree_is_leaf- checks if node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
