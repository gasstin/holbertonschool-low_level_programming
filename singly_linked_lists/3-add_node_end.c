#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node at the end
 * of a list_t list.
 * @head: is the new head of the list..
 * @str: is the string of the new node.
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *paux = NULL;
	list_t *end = *head;

	paux = malloc(sizeof(list_t));
	if (paux)
	{
		if (end)
		{
			while (end->next)
				end = end->next;
			end->next = paux;
		}
		else
		{
			end = paux;
			*head = paux; 
		}
		paux->str = strdup(str);
                paux->len = strlen(str);
                paux->next = NULL;
		return (end);
	}
	return (NULL);
}
