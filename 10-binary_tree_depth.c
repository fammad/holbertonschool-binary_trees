#include "binary_trees.h"
/**
 * binary_tree_depth - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		binary_tree_depth(tree->parent);
		depth++;
	}
	return (depth);
}
