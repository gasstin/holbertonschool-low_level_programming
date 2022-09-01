#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{	
	int n = 0;

	if (!tree)
		return (0);
	
	if (tree->left)
		n = binary_tree_is_full(tree->left);
	if (tree->right)
		n = binary_tree_is_full(tree->right);
	/*if (((tree->left && tree->right) || (!tree->left && !tree->right)) && tree->parent)*/ /*count if has almost one node*/		
	/*n = 1;
	else 
		n = 0;*/
	if (tree->parent)
	{
	if ((!tree->left || !tree->right)) /*si no existe algun nodo*/
		n = 0;
	else
		n = 1;
	}
	return (n);
}
