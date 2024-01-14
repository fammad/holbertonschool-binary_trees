#include "binary_trees.h"
/*
 *binary_tree_uncle - Finds the uncle of a node
 *@node: Main focus node 
 *Return: Pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *grandparent = node->parent->parent;

	if(node->parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}
