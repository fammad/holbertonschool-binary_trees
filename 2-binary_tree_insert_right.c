#include "binary_trees.h"
/**
 * binary_tree_insert_right - Something usefull
 * @parent: Something more usefull
 * @value: Something more usefull
 *
 * Return: Something much more usefull
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->parent = parent;
	if (parent->right != NULL)
	{
		old = parent->right;
		old->parent = new;
		new->right = old;
	}
	else
	{
		new->right = NULL;
	}
	parent->right = new;
	return (new);
}
