#include "binary_trees.h"
/**
 * binary_tree_insert_left - create and insert a node to @parent.
 * @parent: pointer to the parent node of the node to create.
 * @value: value of the new node to create.
 * Return: pointer to the created node, or NULL on failure or if parent
 * in NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *current = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(NULL, value);

	if (!node)
		return (NULL);

	if (parent->left)
	{
		current = parent->left;
		current->parent = node;
	}
	parent->left = node;
	node->parent = parent;
	node->left = current;
	return (node);
}
