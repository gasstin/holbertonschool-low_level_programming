# include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: is a variable
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int m = n % 10;

_putchar (m + '0');
return (m);
}
