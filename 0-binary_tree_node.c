#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: passes a value to the new node
 *
 * Return: NULL  if empty
 *	Otherwise value
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *mzae;

	mzae = malloc(sizeof(binary_tree_t));

	if (!mzae)
	{
		return (NULL);
	}
	else
	{
		mzae->n = value;
		mzae->left = NULL;
		mzae->right = NULL;
		mzae->parent = parent;
		return (mzae);
	}

}
