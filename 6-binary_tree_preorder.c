#include "binary_trees.h"
/**
 * binary_tree_preorder - Something usefull
 * @tree: Something more usefull
 * @func: Something more usefull
 *
 * Return: Something much more usefull
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
