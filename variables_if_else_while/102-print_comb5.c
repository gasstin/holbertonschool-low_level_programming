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
	int h;
	int i;
	int l;
	int o;
	int m = 32;
	int n = 44;

		for (l = 48; l <= 57; l++)
		{
			for (o = 48; o <= 57; o++)
			{
				for (h = 48 ; h <= 57; h++)
				{
					for (i = 48; i <= 57; i++)
					{
					if ((l <= h) && !(l == h && o == i))
					{
					putchar(l);
					putchar(o);
					putchar(m);
					putchar(h);
					putchar(i);
					if (!(l == 57 && o == 56 && h == 57 && i == 57))
					{
					putchar(n);
					putchar(m);
					}

					}
					}
				}
			}
		}


	putchar('\n');
	return (0);
}
