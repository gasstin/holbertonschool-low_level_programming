#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - write a program that performs simple operations.
 * as a parameter on each element of an array
 * @argc: is the number of arguments.
 * @argv: is the arguments's vector 
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int n = 0;
	
	if (argc != 4) /* Los argumentos no alcanzan */
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || strlen(argv[2]) > 1) /* El operador no es correcto */
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0) /* No se puede dividir entre 0 */
	{
		printf("Error\n");
		exit(100);
	}
	
	n = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", n);
	return (0);
}
