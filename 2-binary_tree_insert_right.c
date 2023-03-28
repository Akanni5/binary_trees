#include "binary_trees.h"
/**
 * binary_tree_insert_right - create and insert a node to @parent.
 * @parent: pointer to the parent node of the node to create.
 * @value: value for the created node.
 * Return: pointer to the created node, or NULL on failure or if parent.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *current = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(NULL, value);

	if (!node)
		return (NULL);

	if (parent->right)
	{
		current = parent->right;
		current->parent = node;
	}
	parent->right = node;
	node->parent = parent;
	node->right = current;
	return (node);
}
