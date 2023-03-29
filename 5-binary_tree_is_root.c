#include "binary_trees.h"
/**
 * binary_tree_is_root - function thats check if a node is a root
 * node.
 * A root node is a node without a parent node. Hence it's the root
 * of the tree structure.
 * @node: node to check.
 * Return: returns 1 if true, else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
