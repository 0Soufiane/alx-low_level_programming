#include "main.h"

/**
  * main - point of entry
  * Description - A program that multiplies two numbers
  * @argc: argument counter
  * @argv: argument vector
  * Return: always 0 (success)
  */

int main(int argc, char **argv)
{
	int i, j, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		res = i * j;
		printf("%d\n", res);
	}
	return (0);
}
