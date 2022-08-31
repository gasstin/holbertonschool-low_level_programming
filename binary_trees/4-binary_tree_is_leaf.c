#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (!node)
		return (n);

	if (!node->left && !node->right) /* left & right pointers doesn't exists */
		n = 1;
	
	return (n);

}
