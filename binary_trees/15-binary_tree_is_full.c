#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{	
	int n = 1, n_l = 1, n_r = 1;

	if (!tree)
		return (0);

	if ((tree->left || tree->right) && (!tree->left || !tree->right))
			return (0);/*return if a node doesn't exists*/

	if (tree->left) /*left side tree*/
		n_l = binary_tree_is_full(tree->left);
	if (tree->right) /*right side tree*/
		n_r = binary_tree_is_full(tree->right);

	if (n_l && n_r)
		n = 1;
	else
		n = 0;

	return (n);
}
