#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Write a function that prints all the elements
 * of a listint_t list.
 * @head: is the list with information.
 *
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *paux = head;
	size_t m = 0;

	if (head)
	{
		while (paux)
		{
			printf("[%p] %d\n", (void *)paux, paux->n);
			m++;
			paux = paux->next;
		}
	}
	else
		exit(98);
	return (m);
}
