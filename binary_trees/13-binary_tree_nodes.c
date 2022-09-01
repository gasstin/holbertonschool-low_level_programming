#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{	
	size_t s = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right) /*count if has almost one node*/
		s++;

	if (tree->right)
		s += binary_tree_nodes(tree->left);
	if (tree->right)
		s += binary_tree_nodes(tree->right);

	return (s);
}
