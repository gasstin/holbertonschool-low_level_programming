#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: is the new head of the list.
 *
 * Return: 0 if the linked list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *paux = head;
	int m = 0;

	if (head)
	{
		while (paux)
		{
			m += paux->n;
			paux = paux->next;
		}
	}
	return (m);
}
