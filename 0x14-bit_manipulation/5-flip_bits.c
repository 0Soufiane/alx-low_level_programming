#include "main.h"

/**
 * flip_bits - flipper zero of bits
 * to etirator of numbers
 * @n: function argument
 * @m: destination of the bit.
 * Return: number o times flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pro, bits = 0;

	for (pro = n ^ m; pro > 0; pro >>= 1)
	{
		bits += (pro & 1);
	}

	return (bits);
}
