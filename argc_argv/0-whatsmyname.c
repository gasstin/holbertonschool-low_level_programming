#include "main.h"
#include <stdio.h>

/**
 * mynameis- Write a function that prints its name
 * @dest: is the string of destination
 * @src: is the string of source
 * @n: is the number of bytes
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf ("%s\n", argv[0]);

	return (0);
}
