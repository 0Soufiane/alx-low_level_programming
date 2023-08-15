#include <stdio.h>

/**
 * print_to_98 -> 98 print to 98
 * @n: number input
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	else
		printf("98");
	printf("\n");
}}
