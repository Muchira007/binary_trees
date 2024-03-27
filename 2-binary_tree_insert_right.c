#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: passes a value to the new node
 *
 * Return: NULL  if empty
 *	Otherwise value
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	binary_tree_t *mzae;

	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		mzae = binary_tree_node(parent, value);
		if (mzae == NULL)
			return (NULL);

		if (parent->right != NULL)
		{
			mzae->right = parent->left;
			parent->right->parent = mzae;
		}
		parent->right = mzae;

		return (mzae);
}
}
