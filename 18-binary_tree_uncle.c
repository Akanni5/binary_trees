#include "binary_trees.h"
/**
 * sibling - function to find the sibling
 * of a given node.
 * @node: binary tree node.
 * Return: pointer to the sibling of @node.
 */
binary_tree_t *sibling(binary_tree_t *node)
{
    binary_tree_t *sibling = NULL;
    binary_tree_t *parent = NULL;

    if (!node || !node->parent)
        return (NULL);
    parent = node->parent;
    sibling = (memcmp(parent->left, node, sizeof(binary_tree_t)) == 0) ? 
        parent->right : parent->left;
    
    return (sibling);
}

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *uncle = NULL;
    binary_tree_t *parent = NULL;

    if (!node || !node->parent)
        return (NULL);
    parent = node->parent;
    uncle = sibling(parent);
    return (uncle);
}
