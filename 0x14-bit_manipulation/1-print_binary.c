#include "main.h"

/**
 * print_binary - prints the binary form  of a number
 * @n: parameter
 *
 **/
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int current_number;

	for (k = 63; k >= 0; k--)
	{
		current_number = n >> k;

		if (current_number & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
