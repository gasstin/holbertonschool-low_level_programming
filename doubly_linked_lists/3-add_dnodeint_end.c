#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: is the list of nodes.
 * @n: is the value of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = new;
		new->prev = end;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
