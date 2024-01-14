#include "binary_trees.h"
/**
 * binary_tree_insert_left - Something usefull
 * @parent: Something more usefull
 * @value: Something more usefull
 *
 * Return: Something much more usefull
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->right = NULL;
	new->parent = parent;
	if (parent->left != NULL)
	{
		old = parent->left;
		old->parent = new;
		new->left = old;
	}
	else
	{
		new->left = NULL;
	}
	parent->left = new;
	return (new);
}
