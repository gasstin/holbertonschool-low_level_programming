#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Write a function that adds a new node at the beginning
 * of a listint_t list.
 * @head: is the new head of the list..
 * @n: is the value of the new node.
 *
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *paux = NULL;

	paux = malloc(sizeof(listint_t));
	if (!paux)
		return (NULL);
	paux->n = n;
	paux->next = *head;
	*head = paux;
	return (*head);
}
