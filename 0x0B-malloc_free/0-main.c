#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_prints_buffer - prints buffer in hexa
 * @buffer: address of memory to print
 * @size: size of memory
 * Return: nothing
 *
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;

while(i < size)
{
if (i % 10)
{

printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}


/**
 * main - code tester for ALX School students
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{

char *buffer;

buffer = create_array(98, 'H');
if (buffer == NULL)
{
printf("failed to allocate memory\n");
return (0);
}
simple_print_buffer(buffer, 98);
free(buffer);
return (0);

}
