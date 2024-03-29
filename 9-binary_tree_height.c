#include "binary_trees.h"

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 - If Null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
}
