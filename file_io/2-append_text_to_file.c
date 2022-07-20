#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Write a function
 * that appends text at the end of a file.
 * @filename: is the name if the file.
 * @text_content: is the content of the new file.
 *
 * Return: if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int aux;

	if (!filename)
		return (-1);
	aux = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (aux == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write(aux, text_content, strlen(text_content));

	close(aux);

	return (1);
}
