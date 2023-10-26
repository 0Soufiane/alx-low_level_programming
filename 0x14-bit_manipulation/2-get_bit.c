#include "main.h"

/**
 * set_bit - bit to 1 indexed
 * @n: pointer with n.
 * @index: position
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
