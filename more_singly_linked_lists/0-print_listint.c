#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * of a listint_t list.
 * @h: is the list with information.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *paux = h;
	size_t m = 0;

	while (paux)
	{
		if (paux->n)
			printf("%d\n", paux->n);
		else
			printf("[0] (nil)\n");
		m++;
		paux = paux->next;
	}
	return (m);
}
