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
