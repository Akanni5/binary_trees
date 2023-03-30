#include "binary_trees.h"
/**
 * binary_tree_sibling - function to find the sibling
 * of a given node.
 * @node: binary tree node.
 * Return: pointer to the sibling of @node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
		sibling = parent->right;
	else if (parent->right == node)
		sibling = parent->left;

	return (sibling);

	return (sibling);
}
