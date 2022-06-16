# include "main.h"
# include <stdio.h>

/**
 * leet - Write a function that encodes a string into 1337.
 * @a: is the string.
 *
 * Return: Always 0.
 */

char *leet(char *a)
{
	int i = 0;
	int j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	while (*(a + i))
	{
		for (j = 0; letter[j]; j++)
		{
			if (a[i] == letter[j])
				a[i] = number[j];
		}
	i++;
	}
	return (a);
}
