# include "main.h"
# include <stdio.h>

/**
 * _strpbrk - Write a function that searches a string
 * for any of a set of bytes.
 * @s: is the string to find
 * @accept: is the caracter
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	/*unsigned int i = 0;*/
	/*unsigned int j = 0;*/

	while (s && *s != *accept)
	{
		while (*accept != *s)
		{
			if (*s == *accept)
			{
				break;
			}
			accept++;
		}
		s++;
	}
		/* if (!*s)*/
		/*{*/
				/*s = NULL;*/
				/*break;*/
			/*}*/
		/*}*/
	s = s - 1;
	return (s);
}
