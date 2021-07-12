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
	int i;
	for (i = 0; i < 1 && argc != 0; i++)
		printf("%s\n",argv[0]);
	return (0);
}
