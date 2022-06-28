#include <stdio.h>
#include "dog.h"

/**
 * new_dog - write a function that creates a new dog.
 *
 * @name: is the  name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner's dog
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = NULL;
	char *new_name = NULL;
	char *new_owner = NULL;
	int n = 0, m = 0, o = 0;

	new = malloc(sizeof(dog_t));
	if (new)
	{
		while (*(name + n))
			n++;
		n++;
		while (*(owner + m))
			m++;
		m++;
		new_name = malloc(n);
		new_owner = malloc(m);
		if (new_name && new_owner)
		{
			for (o = 0; o < n; o++)
				new_name[o] = name[o];

			new->name = new_name;

			new->age = age;

			for (o = 0; o < m; o++)
				new_owner[o] = owner[o];
			new->owner = new_owner;
		}
		else
		{
			free(new_name);
			free(new_owner);
			free(new);
		}
	}
	else
		free(new);
	return (new);
}
