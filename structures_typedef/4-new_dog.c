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

	new = malloc(sizeof(dog_t));
	if (new)
	{
		new->name = name;
		new->age = age;
		new->owner = owner;
	}

	return (new);
}
