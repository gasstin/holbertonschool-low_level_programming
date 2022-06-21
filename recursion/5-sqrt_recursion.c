#include "main.h"

/**
 * cuadrado - find the square root of n.
 * @aux: is the auxiliar variable.
 * @n: is the number.
 *
 * Return: Always 0.
 */
int cuadrado(int n, int aux)
{
	if (aux * aux == n)
		return (aux);
	else if (aux * aux > n)
		return (-1);
	aux++;
	return (cuadrado(n, aux));
}
/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number
 * @n: is the number.
 *
 * Return: return the square root.
 */

int _sqrt_recursion(int n)
{

	if (n >= 0)
	{
		int aux = 1;

		return (cuadrado(n, aux));
	}
	else
		return (-1);
}
