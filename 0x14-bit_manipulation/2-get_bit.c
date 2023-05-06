#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: value
 *
 **/
int get_bit(unsigned long int b, unsigned int index)
{
	int bit;

	bit = (b >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
