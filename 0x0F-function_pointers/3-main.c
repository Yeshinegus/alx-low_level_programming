#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/*
 * main - program entry point
 * @argc: counter
 * @argv: array of argument
 *
 * Return: integer
 *
 */

int main(int argc, char *argv[])
{

int calc, num1, num2, i;
char *op;

if (argc < 4)
	exit(98);
for (i = 1; i < argc; i++)
{
if (i == 1)
	num1 = atoi(argv[i]);
if (i == 2)
	op = argv[i];
if (i == 3)
	num2 = atoi(argv[i]);
}
calc = (*get_op_func(op))(num1, num2);
return (calc);
}
