#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{	
	int h_l, h_r;

	if (!tree)
		return (0);
	
	h_l = binary_tree_height(tree->left); /*left tree*/
	h_r = binary_tree_height(tree->right); /*right tree*/

	return (h_l - h_r);
}
