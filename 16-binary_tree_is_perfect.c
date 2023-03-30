#include "binary_trees.h"

/**
 * check_depth - function to check the depth
 * of a tree.
 * @tree: a binary tree.
 * Return: depth of a binary tree.
*/
int check_depth(const binary_tree_t *tree)
{
	int depth = 0;
	binary_tree_t *root = (binary_tree_t *)(tree);

	while (root)
	{
		depth += 1;
		root = root->right;
	}

	return (depth);
}


/**
 * is_tree_perfect - check if a binary tree is
 * perfect.
 * @tree: a binary tree.
 * @depth: depth of the binary tree.
 * @level: height level of the binary tree.
 * Return: 1 as true, 0 as false.
*/
int is_tree_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return ((depth == level));
	else if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (
		is_tree_perfect(tree->left, depth, level + 1) &&
		is_tree_perfect(tree->right, depth, level + 1)
	);
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

	depth = check_depth(tree);
	return (is_tree_perfect(tree, depth, 0));
}
