#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Write a function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: is the list of nodes.
 * @index: is the index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = NULL;

	if (!*head)
		return (-1);
	if (!index)
	{
		del = *head;
		*head = del->next;
		free(del);
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		del = *head;
		while (index)
		{
			del = del->next;
			if (!del)
				return (-1);
			index--;
		}
		/* conecto los punteros in node index */
		if (del->next)
			del->next->prev = del->prev;
		if (del->prev)
			del->prev->next = del->next;
		/* delete node */
		free(del);
	}
	return (1);
}
