#include "binary_trees.h"
/**
 * binary_tree_leaves - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree-left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL)
	{
		leaves++;
	}
	if (tree->right != NULL)
	{
		leaves++;
	}
	return (leaves);
}
