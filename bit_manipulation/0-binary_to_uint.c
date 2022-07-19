#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary number
 * to an unsigned int.
 * @b: is the binary.
 *
 * Return: an unsigned int or 0 if function fall.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0;

	if (b)
	{
		for (u = 0; *b; b++)
		{
			if (*b == '1')
				u = (u << 1) | 1;
			else if (*b == '0')
				u <<= 1;
			else
				return (0);
		}
		return (u);
	}
	return (0);
}
