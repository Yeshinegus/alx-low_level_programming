#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/*
 * get_op_func - function
 * @s: pointer to char
 *
 * @num1: integer val1
 * @num2: integer val2
 *
 * Return: integer
 */
int (*get_op_func(char *s))(int num1, int num2)
{
op_t op[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (op[i][])
{
if (op[i][] == s)
return (op[i][++i](num1, num2));
i++;
}
exit(99);
}
