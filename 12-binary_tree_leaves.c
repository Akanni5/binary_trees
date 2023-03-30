#include "binary_trees.h"

#define VALID(node) ((node != NULL) ? (1) : (0))

/**
 * binary_tree_leaves - function to count the number of
 * leaves of a node.
 * @tree: binary tree.
 * Return: number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (!tree)
		return (0);
	num_leaves += VALID(tree->left);
	num_leaves += VALID(tree->right);

	/**
	 * if the node exists, but its left and right
	 * node are empty, then the node itself is considered
	 * a leaf.
	*/
	num_leaves = num_leaves == 0 ? 1 : num_leaves;
	return (num_leaves);
}