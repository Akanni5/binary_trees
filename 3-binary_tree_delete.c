#include "binary_trees.h"
/**
 * binary_tree_delete - function to deletes an entire tree.
 *
 * this function will delete the entire tree by using a recursive
 * approach. It'll call itself on the children of the tree, making
 * it transverse through the tree.
 *
 * @tree: binary tree to be deleted.
 * Return: void.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/* this acts as the breakpoint of the recursion. */
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
