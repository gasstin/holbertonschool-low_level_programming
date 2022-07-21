#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Write a function that returns
 * the number of elements in a linked dlistint_t list.
 * @h: is the list of nodes.
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;
	const dlistint_t *aux = h;

	if (h)
	{
		while (aux)
		{
			m++;
			aux = aux->next;
		}
	}
	return (m);
}
