#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - write a function that executes a function given
 * as a parameter on each element of an array
 * @array: is the array to use.
 * @size: Is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: On success 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array && action && size > 0)
	{
		for (n = 0; n < size; n++)
			action(array[n]);
	}
}
