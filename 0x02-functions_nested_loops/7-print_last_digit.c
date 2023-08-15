#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: Parameter for the function
 *
 * Return: n the last digit
 */

int print_last_digit(int n)
{

	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
