#include "binary_trees.h"
/**
 * binary_tree_height - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 1;

	if (tree)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) != 0 || binary_tree_height(tree->right) != 0)
	{
		height++;
	}
	return (height);
}