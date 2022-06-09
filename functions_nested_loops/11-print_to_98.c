# include "main.h"
# include <stdio.h>

/**
 * print_to_98 - prints the numbers from n to 98
 * @n: is the passed variable
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{

	if (n == 98)
	{
		printf("98");
	}
	else
	{
		while (n != 98)
		{
		if (n > 98)
		{
			printf("%d", n);
			n--;
			if (n != 98)
			{
				printf(", ");
			}
		}
		else
		{
			printf("%d", n);
			n++;
			if (n != 98)
			{
				printf(", ");
			}
		}
		}
		printf(" 98");
		}
	printf("\n");
}
