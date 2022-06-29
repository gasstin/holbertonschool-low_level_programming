#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - write a function that prints a name
 * @name: Is the name to print
 * @f: is the function pointer
 *
 * Return: On success 1.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
