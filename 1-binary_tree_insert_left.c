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
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	parent->left = new;
	return (new);
}
