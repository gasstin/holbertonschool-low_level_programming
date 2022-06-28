#include <stdio.h>
#include "dog.h"

/**
 * init_dog - write a function that initialize a variable
 * of type struct dog.
 * @d: is a pointer to the struct
 * @name: is the  name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner's dog
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
