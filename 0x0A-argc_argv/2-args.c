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
	for (i = 0; i < argc; i++)
		printf("%s\n",argv[i]);
	return (0);
}
