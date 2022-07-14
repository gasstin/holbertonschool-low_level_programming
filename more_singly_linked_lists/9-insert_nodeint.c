#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts
 * a new node at a given position.
 * @head: is the new head of the list.
 * @idx:  is the index of the list where the new node should be added,
 * starting at 0.
 * @n: is the value of the new node
 *
 * Return: 0 if the linked list is empty.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *paux = *head;
	listint_t *paux_2 = *head;
	listint_t *new = NULL;
	unsigned int m = 0;

		while (m != idx && idx)
		{
			paux = paux->next;
			paux_2 = paux_2->next;
			m++;
			if (!paux)
				return (NULL);
		}
		paux_2 = paux_2->next;
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		paux->next = new;
		new->n = n; /*agrego el nuevo n*/
		new->next = paux_2; /*apunto el node new al puntero auxiliar 2*/
		return (new);
}
