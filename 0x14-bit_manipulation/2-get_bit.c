#include "main.h"

/**
 * set_bit - function that steal bits xd
 * @n: decimal random number.
 * @index: index of the bit
 * Return: 1 or ou -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
