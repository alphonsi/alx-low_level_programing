#include "main.h"

/**
 * binary_to_uint - this converts a binary number to unsigned int
 * @b: string containing the binary number to be converted 
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_valu = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_valu = 2 * dec_valu + (b[i] - '0');
	}
	return (dec_valu);
}
