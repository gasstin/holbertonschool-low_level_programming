#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{	

	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left != node)
			return (node->parent->left);
		if (node->parent->right != node)
			return (node->parent->right);
	}
	return (NULL);
}
