#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Write a function that prints all the elements
 * of a list_t list.
 * @h: is the list with information.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *paux = h;
	size_t n = 0;

	while (paux)
	{
		if (paux->str)
			printf("[%d] %s\n", paux->len, paux->str);
		else
			printf("[0] (nil)\n");
		n++;
		paux = paux->next;
	}
	return (n);
}
