#include "binary_trees.h"

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

/**
 * binary_tree_height - this function checks the height of a
 * binary tree.
 * @tree: the binary tree.
 * Return: the height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t left_height = 0;
	size_t right_height = 0;

	/* there's no height for an empty node or a leaf node */
	if (!tree || (!tree->left && !tree->right))
		return (height);
	height = 1;

	/* get the height of the left and right */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/**
	 * get the maximum height between the left and
	 * right node, add it to the current height.
	 */
	height += MAX(left_height, right_height);
	return (height);
}
