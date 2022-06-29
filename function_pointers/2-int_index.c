#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - write a function that searches for an integer
 * as a parameter on each element of an array
 * @array: is the array to use.
 * @size: Is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the firts element.
 * -1 if no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && cmp && size > 0)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
				return (n);
		}

	}

	return (-1);
}
