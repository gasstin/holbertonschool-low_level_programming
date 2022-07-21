#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: is the list of nodes.
 *
 * Return: always void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
