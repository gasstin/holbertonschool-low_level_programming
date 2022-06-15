# include "main.h"
# include <stdio.h>

/**
 * _strncpy - Write a function that copy a strings.
 * @dest: is the string of destination
 * @src: is the string of source
 * @n: is the number of bytes.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
		i++;
	while (j != n)
	{
		if (src [j] != '\0')
			dest[j] = src[j];
		else
			dest[j] = '\0';
		j++;
	}

	return (dest);
}
