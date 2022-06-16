# include "main.h"
# include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @a: is the string.
 *
 * Return: Always 0.
 */

char *cap_string(char *a)
{
	int i = 0;

	while (*(a + i))
	{
		if (a[0] >= 'a' && a[0] <= 'z' && a[0] != '\0')
			a[0]  = a[0] - 32;
		if (a[i] == 32 || a[i] == 9 || a[i] == 10 || a[i] == 44)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z' && a[i + 1] != '\0')
				a[i + 1]  = a[i + 1] - 32;
		}
		else if (a[i] == 59 || a[i] == 46 || a[i] == 33 || a[i] == 63)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z' && a[i + 1] != '\0')
				a[i + 1]  = a[i + 1] - 32;
		}
		else if (a[i] == 34 || a[i] == 40 || a[i] == 41)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z' && a[i + 1] != '\0')
				a[i + 1]  = a[i + 1] - 32;
		}
		else if (a[i] == 123 || a[i] == 125)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z' && a[i + 1] != '\0')
				a[i + 1]  = a[i + 1] - 32;
		}
	i++;
	}
	return (a);
}
