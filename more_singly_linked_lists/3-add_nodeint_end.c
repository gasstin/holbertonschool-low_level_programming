#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds a new node at the end
 * of a list_t list.
 * @head: is the new head of the list..
 * @n: is the value of the new node.
 *
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *paux = NULL;
	listint_t *end = *head;

	paux = malloc(sizeof(listint_t));
	if (!paux)
		return (NULL);
	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = paux;
	}
	else
		*head = paux;
	paux->n = n;
	paux->next = NULL;
	return (end);
}
