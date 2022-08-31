#include "binary_trees.h"

/**
 * main - Write a function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left = NULL;

	if (!parent)
		return (NULL);

	new_node_left = malloc(sizeof(binary_tree_t));
	if (!new_node_left)
		return (NULL);
	new_node_left->n = value;
	if (parent->left) /*si ya hay uno a la izquierda*/
	{
		new_node_left->left = parent->left;
		parent->left->parent = new_node_left;
	}
	else
		new_node_left->left = NULL;
	
	new_node_left->parent = parent; /*point to the father*/
	new_node_left->right = NULL;	/*point to the right*/

	parent->left = new_node_left; /*apunto el padre*/

	return (new_node_left);

}
