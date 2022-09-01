#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{	
	size_t s = 0;

	if (!tree)
		return (s);

	if (tree->parent)
	{
		s++;
		s += binary_tree_depth(tree->parent);
	}
	
	return (s);
}
