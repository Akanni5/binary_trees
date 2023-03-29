#include "binary_trees.h"
/**
 * binary_tree_postorder - prints a binary tree in a post-order manner.
 * @tree: pointer to the binary tree.
 * @func: function pointer to a function for printing a node value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
