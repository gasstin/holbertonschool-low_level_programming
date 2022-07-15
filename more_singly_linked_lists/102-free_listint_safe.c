#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "1-listint_len.c"
#include "4-free_listint.c"

/**
 * free_listint_safe - Write a function that frees a listint_t list
 * and set head to NULL
 * @h: is the new head of the list.
 *
 * Return: the address of the new element, or NULL if failed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	if (h)
	{
		m = listint_len(*h);
		free_listint(*h);
		*h = NULL;
	}
	return (m);
}

