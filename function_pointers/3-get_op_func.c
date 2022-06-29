#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -the function that selects the correct function
 * to perform the operation.
 * @s: is the operator passed as argument to the program.
 *
 * Return: a pointer to the function that corresponds
 * to the operator given as a paremeter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s)
	{
		while (*ops[i].op)
		{
			if (*ops[i].op == *s)
				return (*ops[i].f);
			else
				i++;
		}
	}

	return (NULL);
}
