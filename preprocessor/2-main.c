#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the name of the file it was compiled from
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
