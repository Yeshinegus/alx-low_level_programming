#include "holberton.h"
#include <ctype.h>
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
	int i, sum = 0;
	if (argc == 1)
		printf("%d\n", sum);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isalpha (argv[i]) == 1)
				{
					printf("Error\n");
					return (1);
				}
			else
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		
	}
	return (0);
}
