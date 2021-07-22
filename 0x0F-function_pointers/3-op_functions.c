#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"
/*
 * op_sub - subtract numbers
 * op_add - add 2 numbers
 * op_mul - multiply
 * op_div - divide numbers
 * op_mod - modules
 * @num1: integer val1
 * @num2: integer val2
 *
 * Return: integer
 */
int op_sub(int num1, int num2)
{
if (isdigit(num1) == 0 || isdigit(num2) == 0)
{
printf("Error\n");
exit(98);
}	
return (num1 - num2);
}
int op_add(int num1, int num2)
{
if (isdigit(num1) == 0 || isdigit(num2) == 0)
{
printf("Error\n");
exit(98);
}
return (num1 + num2);
}
int op_mul (int num1, int num2)
{
if (isdigit(num1) == 0 || isdigit(num2) == 0)
{
printf("Error\n");
exit(98);
}
return (num1 * num2);
}
int op_div (int num1, int num2)
{
if (isdigit(num1) == 0 || isdigit(num2) == 0 || num2 == 0)
{
printf("Error\n");
exit(98);
}
return (num1 / num2);
}
int op_mod (int num1, int num2)
{
if (isdigit(num1) == 0 || isdigit(num2) == 0 || num2 == 0)
{
	printf("Error\n");
	exit(98);
}
return (num1 % num2);
}
