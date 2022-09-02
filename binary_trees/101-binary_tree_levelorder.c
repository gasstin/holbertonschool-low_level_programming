#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{	
	if (!tree || !func)
		return;

	if ((tree->left || tree->right) && !tree->parent)
		(*func)(tree->n);
	if (tree->left)
		(*func)(tree->left->n);
	if (tree->right)
		(*func)(tree->right->n);
	
	if (tree->left)  /*tree's left part*/
		binary_tree_levelorder(tree->left, *func);
	if (tree->right) /*tree's right part*/
		binary_tree_levelorder(tree->right, *func);
}
