#include <stdio.h>
#include "main.h"

/**
 * set_bit - Write a function that sets the value
 * of a bit to 1 at a given index.
 * @n: is the number.
 * @index: is the position of the bit.
 *
 * Return: 1 if it worked, or -1 it fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 65)
	{
		*n |= (*n | (1 << index));
		return (1);
	}
	return (-1);
}

