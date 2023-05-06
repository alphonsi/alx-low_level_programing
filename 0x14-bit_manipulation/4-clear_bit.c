#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if works or else  -1 if error
 * 
 **/

int clear_bit(unsigned long int *s, unsigned int index)
{
	if (index > sizeof(s) * 8)
		return (-1);
	*s &= ~(1 << index);
	return (1);
}
