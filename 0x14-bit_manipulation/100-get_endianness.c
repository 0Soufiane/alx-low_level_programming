#include "main.h"

/**
  * get_endianness - take a look at endianess.
  * Return: 0 for big and 1 for small.
  */
int get_endianness(void)
{
	int i = 1;

	return ((int) (((char *)&i)[0]));
}
