#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: is the name if the file.
 * @letters: are the numbers of letters to print.
 *
 * Return: returns the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	int aux;
	char *buff;

	if (!filename)
		return (0);
	if (letters > 1685)
		letters = 1685;
	aux = open(filename, O_RDONLY);
	if (aux == -1)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	n = read(aux, buff, letters);
	write(STDOUT_FILENO, buff, letters);

	close(aux);
	free(buff);

	return (n);
}
