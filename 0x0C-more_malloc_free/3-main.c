#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * simple_print_buffer - display buffer in hexa
 *
 * @buffer: char pointer array
 * @size: size of array
 * Return: nothing
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
	printf(" ");
}
if(!(i % 10) && i)
{
	printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}
/**
 * main - checks the code for ALX School students
 *
 * Return: Always 0
 */
int main(void)
{
int *a;

a = array_range(0, 10);

simple_print_buffer(a, 11);

free(a);

return (0);
}
