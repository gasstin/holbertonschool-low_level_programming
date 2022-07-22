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
	dlistint_t *del = *head, *aux = *head, *aux_1 = *head;
	unsigned int m = 0;

	if (!*head)
		return (-1);
	if (index)
	{
		while (m != (index - 1))
		{
			aux = aux->next;
			if (!aux)
				return (-1);
			m++;
		}
		del = aux;
		if (del) /* adelanto el puntero a index */
			del = del->next;
		aux_1 = del;
		if (aux_1)
			aux_1 = aux_1->next;
		free(del);
		/* conect node */
		aux_1->prev = aux;
		aux->next = aux_1;
		/* delete node */
	}
	else
		delete_dnodeint(head);
	return (1);
}
/**
 * delete_dnodeint - Write a function that deletes
 * the node at head.
 * @head: is the list of nodes.
 *
 * Return: always VOID.
 */
void delete_dnodeint(dlistint_t **head)
{
	dlistint_t *del = *head;

	if (*head)
	{
		free(del);
		*head = (*head)->next;
	}
}
