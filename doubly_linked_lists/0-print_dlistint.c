#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Write a function that prints
 * all the elements of a dlistint_t list.
 * @h: is the list of nodes.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t m = 0;
	const dlistint_t *aux = h;

	if (h)
	{
		while (aux)
		{
			printf("%d\n", aux->n);
			m++;
			aux = aux->next;
		}
	}
	return (m);
}
