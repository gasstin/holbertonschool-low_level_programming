#include <stdio.h>
/**
 * main - Entry point
 *
 * printf: print a string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	int m;
	long int n;
	long long int o;
	float p;

	printf("Size of a char: %d byte(s)\n", sizeof(l));
	printf("Size of an int: %d byte(s)\n", sizeof(m));
	printf("Size of a long int: %d byte(s)\n", sizeof(n));
	printf("Size of a long long int: %d byte(s)\n", sizeof(o));
	printf("Size of a float: %d byte(s)\n", sizeof(p));


	return (0);
}
