#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: is the new head of the list.
 *
 * Return: the address of the new element, or NULL if failed
 */
void free_list(list_t *head)
{
	list_t *paux = NULL;	

	while(head)
	{
		paux = head;
		head = head->next;
		free(paux->str);
		free(paux);
	}
	free(head);
}
