#include "main.h"

/**
 * clear_bit - bit to 0 in an index.
 *
 * @n: address of n.
 * @index:index given
 * Return: 1 or ou -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
