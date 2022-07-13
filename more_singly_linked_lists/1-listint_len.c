#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Write a function that returns the number
 * of a listint_t list.
 * @h: is the list with information.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *paux = h;
	size_t m = 0;

	while (paux)
	{
		m++;
		paux = paux->next;
	}
	return (m);
}
