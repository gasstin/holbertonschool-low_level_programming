#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index- Write a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: is the list of nodes.
 * @index: is the position of the node.
 *
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *aux = head;

	while (index != n)
	{
		aux = aux->next;
		if (!(aux->next))
			return (NULL);
		n++;
	}

	return (aux);
}
