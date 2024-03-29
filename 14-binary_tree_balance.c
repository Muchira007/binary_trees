#include "binary_trees.h"

/**
 * binary_tree_balance - Function measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * the balance factor
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (l_height - r_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t kushoto = 0, kulia = 0;

		kushoto = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		kulia = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((kushoto > kulia) ? kushoto : kulia);
	}
	return (0);
}
