#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Write a function that returns the number
 * of a list_t list.
 * @h: is the list with information.
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	const list_t *paux = NULL;
	size_t n = 0;

	paux = malloc(sizeof(list_t));
	paux = h;

	while (paux)
	{
		n++;
		paux = paux->next;
	}
	return (n);
}
