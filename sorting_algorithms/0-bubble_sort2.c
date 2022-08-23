#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, size_aux = size - 1;
	int aux = 0;

	if (size < 2)
		return;	
	while (size_aux)
	{
		for (i = 0; i < size_aux; i++)
		{
			j = i;
			if ((array[j] > array[j + 1]) && (j + 1) < size_aux)
			{
				aux = arrayj[j];
				array[i] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
		size_aux--;
	}
}
