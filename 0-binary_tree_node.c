#include "binary_trees.h"
/**
 * binary_tree_node - function to create a node.
 * @parent: pointer to the parent to the new node.
 * @value: value to put in the new node.
 * Return: pointer to the new node, NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
