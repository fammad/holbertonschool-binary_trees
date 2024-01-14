#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes;

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	if (tree == NULL)
		return(0);
	if (height == nodes)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_height - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
	{
		return (1 + binary_tree_height(tree->left));
	}
	else
	{
		return (1 + binary_tree_height(tree->right));
	}
}
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
