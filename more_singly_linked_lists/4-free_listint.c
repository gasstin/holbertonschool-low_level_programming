#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: is the new head of the list.
 *
 * Return: the address of the new element, or NULL if failed
 */
void free_listint(listint_t *head)
{
	listint_t *paux = NULL;

	while (head)
	{
		paux = head;
		head = head->next;
		free(paux);
	}
	free(head);
}
