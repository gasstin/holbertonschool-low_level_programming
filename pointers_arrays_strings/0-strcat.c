# include "main.h"
# include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: is the string of destination
 * @src: is the string of source
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (dest[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
