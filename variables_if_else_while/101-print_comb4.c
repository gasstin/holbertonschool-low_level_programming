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
	int p;


	for (l = 48; l <= 57; l++)
	{
		for (o = l; o <= 57; o++)
		{
			for (p = o; p <= 57; p++)
			{
				if (p != o && o != l)
				{
				putchar(l);
				putchar(o);
				putchar(p);
				if (!(l == 55 && o == 56 && p == 57))
				{
					putchar(n);
					putchar(m);
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
