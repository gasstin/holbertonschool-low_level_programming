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
	aux = open(filename, O_RDWR | O_CREAT);
	if (aux == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write(aux, text_content, strlen(text_content));

	close(aux);

	return (1);
}
