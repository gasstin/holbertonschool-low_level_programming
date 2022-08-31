#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{	
	if (!tree || !func)
		return;

	(*func)(tree->n); /*call the function*/
	if (tree->left)  /*tree's left part*/
		binary_tree_preorder(tree->left, *func);
	if (tree->right) /*tree's right part*/
		binary_tree_preorder(tree->right, *func);

}
