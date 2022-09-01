#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{	
	size_t s = 0;

	if (!tree)
		return (s);
	if (tree->left)  /*tree's left part*/
	{
		s++;
		binary_tree_height(tree->left);
	}
	if (tree->right) /*tree's right part*/
	{
		s++;
		binary_tree_height(tree->left);
	}
	return (s);
}
