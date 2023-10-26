#include "main.h"

/**
 * print_binary - prints number in binary format
 * @n: number random
 * Return: la chay2
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
