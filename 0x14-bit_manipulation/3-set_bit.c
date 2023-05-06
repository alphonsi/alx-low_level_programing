#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: index
 * Return: value
 *
 **/
int set_bit(unsigned long int *s, unsigned int index)
{
	if (index > sizeof(s) * 8)
		return (-1);
	*s |= (1 << index);
	return (1);
}
