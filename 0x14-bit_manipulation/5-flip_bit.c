#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @k: parameter
 * @n: destiny
 * Return: kflips
 *
 **/
unsigned int flip_bits(unsigned long int k, unsigned long int n)
{
	unsigned int a, kflips = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	for (a = 0; a < b; a++)
	{
		if ((k & 1) != (k & 1))
			kflips += 1;
		k = k >> 1;
		n = n >> 1;
	}
	return (kflips);
}
