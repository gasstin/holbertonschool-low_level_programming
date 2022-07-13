#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Write a function that adds a new node at the beginning
 * of a list_t list.
 * @head: is the new head of the list..
 * @str: is the string of the new node.
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *paux = NULL;
/*	const char *str_aux;*/

	paux = malloc(sizeof(list_t));
	if (paux)
	{
		paux->str = strdup(str);
		paux->len = strlen(str);
		paux->next = *head;
		*head = paux;
		return (*head);
	}
	return (NULL);
}
