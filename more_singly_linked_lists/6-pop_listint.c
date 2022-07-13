#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list and returns the head node’s data (n).
 * @head: is the new head of the list.
 *
 * Return: the address of the new element, or NULL if failed
 */
int pop_listint(listint_t **head)
{
	listint_t *paux = NULL;
	int m = 0;

	if (head)
	{
		paux = *head;
		m = (*head)->n;
		*head = (*head)->next;
		free(paux);
	}
	return (m);
}
