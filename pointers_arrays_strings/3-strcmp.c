# include "main.h"
# include <stdio.h>

/**
 * _strcmp - Write a function that copy a strings.
 * @s1: is the first string
 * @s2: is the second string
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] == s2[i])
			{
				j = 0;
			}
			else
			{
				j = s1[i] - s2[i];
				break;
			}
			i++;
		}
	}
	return (j);
}
