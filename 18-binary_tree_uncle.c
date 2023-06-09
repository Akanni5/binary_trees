#include "binary_trees.h"
/**
 * find_sibling - function to find the sibling
 * of a given node.
 * @node: binary tree node.
 * Return: pointer to the sibling of @node.
 */
binary_tree_t *find_sibling(binary_tree_t *node)
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
}

/**
 * binary_tree_uncle - function to the uncle of a
 * binary node.
 * @node: node to check.
 * Return: pointer to the uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	uncle = find_sibling(parent);
	return (uncle);
}
