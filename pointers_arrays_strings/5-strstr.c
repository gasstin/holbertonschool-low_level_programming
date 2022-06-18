#include "main.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring
 * @haystack: is the string to find
 * @needle: is the caracter
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int n = 0;
	int m = 0;
	int l = 0;

	while (*(needle + l))
		l++;

	if (*haystack)
	{
		for (n = 0; haystack[n]; n++)
		{
			if (haystack[n] == needle[0])
			{
				while (haystack[n + m] == needle[m] && needle[m])
				{
					m++;
					if (m == l)
					{
						haystack += n;
						break;
					}
				}
			}
			if (m == l)
				break;
		}
	}
	if (m == l)
		return (haystack);
	else
		return ('\0');

}
