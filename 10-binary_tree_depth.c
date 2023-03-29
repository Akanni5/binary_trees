#include "binary_trees.h"

/**
 * binary_tree_depth - function to the check the depth of
 * a node.
 * The depth of @tree is its height from its parent.
 * The depth is the number of grandparents :)
 * @tree: the binary tree.
 * Return: the depth of the node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (!tree)
		return (depth);

	node = tree->parent;

	while (node)
	{
		depth += 1;
		node = node->parent;
	}

	return (depth);
}
