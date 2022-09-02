#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{	
	size_t s = 0, s_l = 0, s_r = 0;

	if (!tree)
		return (0);
		
	s++;
	
	if (tree->left) /*tree's left part*/
		s_l +=binary_tree_height(tree->left);
	if (tree->right) /*tree's right part*/
		s_r += binary_tree_height(tree->right);
	
	if (s_l > s_r)
		s += s_l;
	else if (s_r > s_l)
		s += s_r;
	
	return (s);
}
