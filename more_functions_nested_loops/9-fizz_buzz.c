# include "main.h"
# include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((n % 5) == 0)
		{
			if (n != 100)
			{
			printf("Buzz ");
			}
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
		if (n == 100)
		{
			printf("Buzz\n");
		}
	}
	return (0);
}
