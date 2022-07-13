#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node
 * of a listint_t linked list.
 * @head: is the new head of the list.
 * @index: is the index of the node, starting at 0
 *
 * Return: 0 if the linked list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *paux = head;
	unsigned int m = 0;

	if (head)
	{
		while (m != index)
		{
			paux = paux->next;
			m++;
		}
		if (paux->next)
			return (paux);
		else
			return (NULL);
	}
	return (NULL);
}
