#include "binary_trees.h"
/**
 *binary_tree_is_full - A function that checks if a binary tree is full
 *@tree: A pointer to the root node of the tree to check
 *Return: 1 or 0
 */
#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return 0;

	if ((tree->left != NULL && tree->right != NULL) ||
		(tree->left == NULL && tree->right == NULL))
		return 0;

	return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}

