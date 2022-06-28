#include <stdio.h>
#include "dog.h"

/**
 * free_dog - write a function that frees dogs
 *
 * @d: is the pointer to the dog
 *
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
