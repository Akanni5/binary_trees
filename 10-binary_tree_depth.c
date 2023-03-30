#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in the tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL or depth (size_t)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
