#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value
 * in an array of integers using the Binary search algorithm
 * @array: is the array to search
 * @size: is the size of the array
 * @value: is the value to search
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int first = 0, last = 0, mid = 0, n = 0;

	if (!array || size < 2)
		return (-1);
	last = size - 1;
	mid = (first + last) / 2;
	while (first <= last)
	{
		mid = (first + last) / 2;
		printf("Searching in array: ");
		for (n = first; n <= last; n++)
		{
			printf("%d", array[n]);
			if (n < last)
				printf(", ");
		}
		printf("\n");
		if (array[mid] < value)
			first = mid + 1;
		else if (array[mid] > value)
			last = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
