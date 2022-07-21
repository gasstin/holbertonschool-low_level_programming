#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: is the list of nodes.
 * @n: is the value of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = NULL, dlistint_t aux_1 = *head;

	aux = malloc(sizeof(dlistint_t));
	if (!aux)
		return (NULL);
	aux->prev = NULL;
	aux->n = n;
	aux->next = aux_1;
	aux_1->prev = aux->next;
	*head = aux;

	return (*head);
}
