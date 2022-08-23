#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, size_aux = 1;
	int min = array[0], aux = 0, pos_min = 0;

	if (size < 2)
		return;

	while (size_aux != (size - 1))
	{
		for (i = size_aux; i < size; i++) /*encuentro el mínimo*/
		{
			if (min > array[i])
			{
				min = array[i];
				pos_min = i;	/*guardo la posicion*/
			}
		}
		if (min != array[j]) /*swapeo si es necesario*/
		{
		aux = array[j];
		array[j] = min;		/*coloco el minimo en la posicion j*/
		array[pos_min] = aux;
		}
		j++;
		size_aux++;
		min = array[j];
		print_array(array, size);
	}
}
