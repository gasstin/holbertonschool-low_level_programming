#include "search_algos.h"

/**
 * linear_search - Write a function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: is the array to search
 * @size: is the size of the array
 * @value: is the value to search
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int n = 0;

	if (!array || !size)
		return (-1);
	while(n != size)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
		n++;
	}
	return (-1);
}
