#include "binary_trees.h"
/**
 * binary_tree_preorder - prints a binary tree in a preorder manner.
 * @tree: pointer to the binary tree.
 * @func: function pointer to a function for printing a node value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
