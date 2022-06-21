#include "main.h"

/**
 * dividir - find if n is a prime number
 * @aux: is the auxiliar variable.
 * @n: is the number.
 *
 * Return: 1 if n is prime or 0 its not..
 */
int dividir(int n, int aux)
{
	if (n == aux)
		return (1);
	if (n % aux == 0)
	{
		return (0);
	}
	else
	{
		aux++;
		return (dividir(n, aux));
	}
	return (dividir(n, aux));
}
/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: is the number.
 *
 * Return: return the value of dividir function.
 */

int is_prime_number(int n)
{

	if (n >= 2)
	{
		int aux = 2;

		return (dividir(n, aux));
	}
	else
		return (0);
}
