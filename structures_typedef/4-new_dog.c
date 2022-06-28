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

	new = malloc(sizeof(dog_t));
	if (new)
	{
		new_name = malloc(sizeof(name));
		if (new_name)
			new_name = name;
		else
		{
			free(new_name);
			free(new);
		}
		new->name = new_name;
		new->age = age;
		new_owner = malloc(sizeof(owner));
		if (new_owner)
			new_owner = owner;
		else
		{
			free(new_owner);
			free(new);
		}
		new->owner = new_owner;
	}
	else
		free(new);

	return (new);
}
