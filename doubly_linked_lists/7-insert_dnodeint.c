#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Write a function that adds a new node
 * at a given position.
 * @h: is the list of nodes.
 * @n: is the value of the new node.
 * @idx: is the index.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *aux = *h, *aux_1 = *h;
	unsigned int m = 0;

	if (idx)
	{
		while (m != (idx - 1))
		{
			aux = aux->next;
			aux_1 = aux_1->next;
			if (!aux)
				return (NULL);
			m++;
		}
		if (aux_1->next) /* adelanto el puntero */
		{
			aux_1 = aux_1->next;
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			/* put el dato n */
			new->n = n;
			/* conect with the next node */
			new->next = aux_1;
			aux_1->prev = new;
			/* conect with the prev node */
			new->prev = aux;
			aux->next = new;
		}
		else
			new = add_dnodeint_end(h, n);
	}
	else
		new = add_dnodeint(h, n);
	return (new);
}
