#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number (results)
 *
 **/
unsigned int binary_to_uint(const char *c)
{
	int k;
	unsigned int dec_val = 0;

	if (!c)
		return (0);

	for (k = 0; c[k]; k++)
	{
		if (c[k] < '0' || c[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (c[k] - '0');
	}
	return (dec_val);
}
