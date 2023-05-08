#include "main.h"
/**
 * read_textfile - reads a text file and prints/display it to the standard output
 * @filename: name of the file to be read and displayed
 * @letters: number of letters to be read and printed
 * Return: the number of letters printed, or 0 if it's failed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int km;
	int i, y;
	char *buf;
	if (!filename)
		return (0);
	km = open(filename, O_RDONLY);
	if (km < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(km, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(km);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
