# include "main.h"
# include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: is the string of destination
 * @src: is the string of source
 * @n: is the number of bytes.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j != n && src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + n] = '\0';

	return (dest);
}
