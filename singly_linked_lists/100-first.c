#include <stdio.h>
/**
 * pre_main - printf before the main
 *
 * Return: Always NULL.
 */
void pre_main(void) __attribute__ ((constructor));
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
