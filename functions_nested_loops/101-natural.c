#include "main.h"
#include <stdio.h>

/**
 * main - find the multiples of 3 and 5 and sum them
 *
 * Return: the sum of all multiples
 */
int main(void)
{
	int n = 0, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (!(n % 3) || !(n % 5))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
