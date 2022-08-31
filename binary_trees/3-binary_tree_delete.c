#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left) /*move to the left*/
		binary_tree_delete(tree->left);
	if (tree->right) /*move to the right*/
		binary_tree_delete(tree->right);
	free(tree);
}
