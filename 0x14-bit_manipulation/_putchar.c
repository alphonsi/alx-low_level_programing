#include "main.h"

/**
 * _putchar - writes the character k to stdout
 * @k: This is the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char k)
{
	return (write(1, &k, 1));
}
