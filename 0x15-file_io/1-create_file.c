#include "main.h"

/**
 * create_file - creates a file and fills it with texts
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 *
 **/
int create_file(const char *filename, char *text_content)
{
	int km, x, y = 0;

	if (!filename)
		return (-1);

	km = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (km < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(km, text_content, y);
		if (x != y)
			return (-1);
	}

	close(km);

	return (1);
}
