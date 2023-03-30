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
	size_t size = sizeof(binary_tree_t);

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	sibling = (memcmp(parent->left, node, size) == 0) ?
		parent->right : parent->left;

	return (sibling);
}
