#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list and returns the head node’s data (n).
 * @head: is the new head of the list.
 *
 * Return: 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *paux = NULL;
	int m = 0;

	if (*head)
	{
		paux = *head;
		m = (*head)->n;
		*head = (*head)->next;
		free(paux);
	}
	return (m);
}
