#include <stdlib.h>
#include <stdio.h>
#include <main.h>
/**
 * read_text - read text file and print to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printe
 * 0 when function fails of filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
