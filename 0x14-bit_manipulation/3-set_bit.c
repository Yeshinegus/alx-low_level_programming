#include "main.h"
#include <stdio.h>
#define SIZE (int)sizeof(int) * 4
/**
 * set_bit - sets a bit
 * @n: integer/decimal value
 * @index: index 
 * Return: value at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int m;
unsigned int i, *bin;

if (n == NULL)
	return (0);
i = 0;
bin = print_binary(n);
while (bin[i] != '\0')
{
if (i == index)
{
	n[i] = 1;
	m = 
	return (m);

}
i++;
n++;
}
return (0);
}
