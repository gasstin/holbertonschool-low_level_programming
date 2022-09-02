#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{	
	int n = 1, n_l = 1, n_r = 1;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		if (tree->right->left && !tree->right->right)	
			return (0);
	}
	
	if (!tree->left && tree->right)
		return (0); /*return if left node doesn't exists*/
	
	if (tree->left) /*left side tree*/
		n_l = binary_tree_is_complete(tree->left);
	if (tree->right) /*right side tree*/
		n_r = binary_tree_is_complete(tree->right);
	
	if (n_l && n_r)
		n = 1;
	else
		n = 0;

	return (n);
}
