#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
int len, len2;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = _printf("Let's try to printf a simple sentence.\n");
_printf("Length: [%d %i]\n", len, len);
_printf("Length: [%d %i]\n", len2, len2);

return (0);

}
