# include "main.h"
# include <stdio.h>

/**
 * _memcpy - Write a function that copy memory areas.
 * @dest: is the string of destination
 * @src: is the string of source
 * @n: is the number of bytes
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;


	if (src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
