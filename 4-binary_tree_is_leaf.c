#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Something usefull
 * @node: Something more usefull
 *
 * Return: Something much more usefull
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left != NULL && node != NULL)
	{
		return (1);
	}
	return (0);
}
