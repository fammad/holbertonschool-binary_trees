#include "binary_trees.h"
/**
 * binary_tree_balance - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - Something usefull
 * @tree: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
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
