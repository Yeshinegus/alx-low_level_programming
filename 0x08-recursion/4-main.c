#include "holberton.h"
#include <stdio.h>
/**
 * main - checks code for ALX students
 *
 * Return: always 0 (success)
 */
int main(void)
{
int r;
 r = _pow_recursion(1, 10);
 printf("%d\n", r);
 r = _pow_recursion(1024, 0);
printf("%d\n", r);
 r = _pow_recursion(2, 16);
 printf("%d\n", r);
 r = _pow_recursion(5, 2);
 printf("%d\n", r);
 r = _pow_recursion(5, -2);
 printf("%d\n", r);
 r = _pow_recursion(-5, 3);
 printf("%d\n", r);
return(0);
}
