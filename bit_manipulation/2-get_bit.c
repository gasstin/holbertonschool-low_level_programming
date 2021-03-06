#include <stdio.h>
#include "main.h"
#include "0-binary_to_uint.c"

/**
 * get_bit - Write a function that returns the value
 * of a bit at a given index.
 * @n: is the number.
 * @index: is the position of the bite.
 *
 * Return: the value of the bit at index or -1 it fail.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 100)
	{
		if ((n >> index) & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}

