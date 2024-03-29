#include "hash_tables.h"

/**
 * hash_djb2 - this function was made for other guy
 * @str: is the strin to hash.
 *
 * Return: the value of hash.
 */

unsigned long int hash_djb2(const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
