#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Write a function that returns
 * the number of bits you would need to flip to get
 * from one number to another.
 * @n: is the number.
 * @m: is the second number.
 *
 * Return: 1 if it worked, or -1 it fail.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int aux = 0;
	unsigned int index = 64;

	if (n != m)
	{
		while (index)
		{
			if (((n >> index) & 1) ^ ((m >> index) & 1))
				aux++;
			index--;
		}
	}
	return (aux);
}

