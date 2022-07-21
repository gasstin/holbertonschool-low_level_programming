#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint- Write a function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 * @head: is the list of nodes.
 *
 * Return: the number of nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int m = 0;
	dlistint_t *aux = head;

	if (head)
	{
		while (aux)
		{
			m += aux->n;
			aux = aux->next;
		}
	}
	return (m);
}
