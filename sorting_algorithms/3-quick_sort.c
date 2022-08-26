#include "sort.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

size_t quick_sort_aux(int *array, size_t size, size_t low, size_t sup)
{
	size_t i = low - 1, j = 0;
	int pivot = 0, aux = 0;

	pivot = array[sup];
	for (j = low; j < sup; j++)
	{
		if (array[j] < pivot) /*si encuentra alguno menor que el pivot*/
		{
			i++;
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;
		}
	}
		print_array(array, size);	
		aux = array[i + 1]; /*swap the pivot*/
		array[i + 1] = pivot;
		array[sup] = aux;
	
	return (i + 1);
}

void quick_sort_suplente(int *array, size_t size, size_t low, size_t sup)
{
	size_t part = 0;

	if (low < sup)
	{
		part = quick_sort_aux(array, size, low, sup);
		if (part)
			quick_sort_suplente(array, size, low, part - 1); /*parte derecha*/
		quick_sort_suplente(array, size, part + 1, sup); /*parte izquierda*/
	}
}

void quick_sort(int *array, size_t size)
{
	size_t low = 0, sup = size - 1;

	if (!array || 2 > size)
		return;
	quick_sort_suplente(array, size, low, sup);
}
