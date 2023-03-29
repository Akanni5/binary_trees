#include "binary_trees.h"
/**
 * binary_tree_inorder - prints a binary tree in a in-order manner.
 * @tree: pointer to the binary tree.
 * @func: function pointer to a function for printing a node value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
