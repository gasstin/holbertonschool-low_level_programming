#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent && node->parent->parent) /*if father and uncle exists*/
	{
		if (node->parent->parent->left != node->parent)
			return (node->parent->parent->left);
		if (node->parent->parent->right != node->parent)
			return (node->parent->parent->right); 

	}

	return (NULL); /*if didn't exists*/
}
