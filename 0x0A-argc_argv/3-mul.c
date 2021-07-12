#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - code entry poing
 *
 * @argc: int parameter
 *
 * @argv: pointer argument
 */
int main (int argc, char *argv[])
{
	int i, mul = 1;
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
