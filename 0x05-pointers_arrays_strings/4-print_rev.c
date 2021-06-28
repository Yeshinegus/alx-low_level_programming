#include "holberton.h"
/**
 * print_rev - returns a string length
 *
 * @s: is an integer pointer 
 *
 */
void print_rev(char *s)
{

int i, j;
j = 0;
for (i = 0; s[i] != '\0'; i++)
j++;
 
for (i = j-1; i >= j; i--)
_putchar(s[i]);
_putchar('\n');

}
