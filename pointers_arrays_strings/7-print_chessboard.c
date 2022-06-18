#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Write a function that prints the chessboard
 * @a: is the array whit the elemets of chessboard
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int n = 0;
	int m = 0;
	
	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar (a[n][m]);
		}
		_putchar ('\n');
	}

}
