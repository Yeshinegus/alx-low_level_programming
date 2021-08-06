#include "main.h"
#include <stdio.h>
/**
 * print_binary - decimal to binary
 * @n: integer/decimal value
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int result;
int i, temp;

result = 0;
for (i = 31; i >= 0; i--)
{
temp = n >> i;
if (temp & 1)
{
result *= 10;
result += 1;
}
else
{
result *= 10;
result += 0;
}
}
printf("%lu\n", result);
}
