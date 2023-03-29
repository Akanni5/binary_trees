#include "binary_trees.h"
/**
 * binary_tree_size - function to calculate the size of a
 * binary tree.
 * @tree: pointer to a binary tree.
 * Return: size of the binary tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (size);
	size = 1;
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (size + left_size + right_size);
}
