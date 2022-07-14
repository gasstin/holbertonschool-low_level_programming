#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "6-pop_listint.c"

/**
 * delete_nodeint_at_index - Write a function that delete
 * the node at a given position.
 * @head: is the new head of the list.
 * @index:  is the index of the list where the new node should be added,
 * starting at 0.
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *paux = *head;
	listint_t *paux_ant = *head;
	listint_t *paux_pos = NULL;
	unsigned int m = 0;

	if (!*head)
		return (-1);
	if (index)
	{
		while (m != (index - 1))
		{
			paux = paux->next;
			paux_ant = paux_ant->next;
			m++;
			if (!paux)
				return (-1);
		}
		if (paux)
			paux = paux->next; /*muevo paux hacia index*/
		paux_pos = paux;
		if (paux_pos)
			paux_pos = paux_pos->next; /*muevo paux_pos al nodo posterior a index*/
		free(paux); /*libero el nodo*/
		paux_ant->next = paux_pos;
	}
	else
	{
		pop_listint(head);
	}
	return (1);
}
