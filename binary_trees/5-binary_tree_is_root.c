#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int n = 0;

	if (!node)
		return (n);

	if (!node->parent) /* parent pointer doesn't exists */
		n = 1;
	
	return (n);

}
