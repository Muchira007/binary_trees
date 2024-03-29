#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, kulia = 0, kushoto = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		kushoto = binary_tree_size(tree->left);
		kulia = binary_tree_size(tree->right);
		size = kulia + kushoto + 1;
	}
	return (size);
}
