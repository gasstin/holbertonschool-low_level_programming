# include "main.h"
# include <stdio.h>

/**
 * string_toupper - Write a function that changes all lowercase
 * letters of a string to uppercase
 * @a: is the string.
 *
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i))
	{
	if (a[i] >= 'a' && a[i] <= 'z')
		a[i]  = a[i] - 32;
	i++;
	}
	return (a);
}
