#include "binary_trees.h"

#define MAX(x, y) ((x) > (y) ? (x) : (y))

/**
 * get_depth - function to check the depth
 * of a tree.
 * @tree: a binary tree.
 * Return: depth of a binary tree.
*/
int get_depth(const binary_tree_t *tree)
{
	int ldepth = 0;
	int rdepth = 0;

	if (!tree)
		return (0);
	ldepth = get_depth(tree->left);
	rdepth = get_depth(tree->right);

	return (1 + MAX(ldepth, rdepth));
}


/**
 * is_perfect - check if a binary tree is
 * perfect.
 * @tree: a binary tree.
 * Return: 1 as true, 0 as false.
*/
int is_perfect(const binary_tree_t *tree)
{
	int ldepth = 0;
	int rdepth = 0;

	if (tree == NULL)
		return (1);
	ldepth = check_depth(ldepth);
	rdepth = check_depth(rdepth);

	if (ldepth == rdepth &&
		is_tree_perfect(tree->left) && is_tree_perfect(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - function to check if
 * a binary tree is perfect.
 * @tree: binary tree.
 * Return: 1 as true, 0 as false.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	return (is_perfect(tree));
}
