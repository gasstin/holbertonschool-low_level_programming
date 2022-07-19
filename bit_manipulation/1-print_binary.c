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
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar ('0');
}

