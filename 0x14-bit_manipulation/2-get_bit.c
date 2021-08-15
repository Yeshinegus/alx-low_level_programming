#include "main.h"
#include <stdio.h>
#define SIZE (int)sizeof(int) * 8
/**
 * get_bit - display the bit at index
 * @n: integer/decimal value
 * @index: index 
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bin[SIZE];	
int i;

i = SIZE - 1;
while (i >= 0)
{
bin[i] = n & 1;
i--;
n >>= 1;
}
for (i = 0; i < SIZE - 1; i++)
printf("%d", bin[i]);
return (bin[index]);
}
