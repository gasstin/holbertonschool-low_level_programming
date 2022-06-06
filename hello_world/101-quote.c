#include <stdio.h>
/**
 * main - Entry point
 *
 * puts: print a string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(text, 59, 1, stderr);

	return (1);
}
