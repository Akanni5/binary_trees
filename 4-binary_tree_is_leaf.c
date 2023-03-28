#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if @node is a leaf node.
 *
 * a node is a leaf node if it has no child[ren].
 * @node: node to check.
 * Return: 1 if leaf node, 0 if not.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
