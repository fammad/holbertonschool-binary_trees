#include "binary_trees.h"
/**
 * binary_tree_size - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
