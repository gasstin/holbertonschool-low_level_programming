# include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: is the string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char p;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	j = 0;
	while (j < i)
	{
		p = s[i];
		s[i] = s[j];
		s[j] = p;
		j++;
		i--;
	}
}
