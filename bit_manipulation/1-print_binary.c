#include <stdio.h>
#include "main.h"

/**
 * print_binary - Write a function that prints
 * the binary representation of a number.
 * @n: is the number.
 *
 * Return: Always void.
 */

void print_binary(unsigned long int n)
{
	int i = 10;

	for (; i > 0; i--)
	{
		if ((n & (1 << i)))
			break;
	}
	for (; i >= 0; i--)
		_putchar(((n & (1 << i)) >> i) + 48);
}
