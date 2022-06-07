#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int l;
	int o;
	int m = 32;
	int n = 44;


	for (l = 48; l <= 57; l++)
	{
		for (o = l; o <= 57; o++)
		{
			if (l != o)
			{
			putchar(l);
			putchar(o);
				if (!(l == 56 && o == 57))
				{
				putchar(n);
				putchar(m);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
