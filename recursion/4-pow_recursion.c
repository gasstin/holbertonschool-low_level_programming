#include "main.h"

/**
 * _pow_recursion- Write a function that returns the value
 * of x raised to the power of y.
 * @x: is the number.
 * @y: is the potencial number
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
