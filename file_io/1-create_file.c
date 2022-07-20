#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: is the name if the file.
 * @text_content: is the content of the new file.
 *
 * Return: if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int aux;

	if (!filename)
		return (-1);
	aux = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (aux == -1)
		return (-1);
/*	if (!text_content)*/
/*		text_content = "";*/
	while (text_content && *(text_content + 1))
	{
		write(aux, text_content, 1);
		text_content++;
	}
	if ((write(aux, text_content, 1)) == -1)
		return (-1);
	close(aux);

	return (1);
}
