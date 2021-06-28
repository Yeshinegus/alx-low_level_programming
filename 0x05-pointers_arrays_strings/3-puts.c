#include "holberton.h"
/**
 * _puts - returns a string length
 *
 * @s: is an integer pointer 
 *
 */
void _puts(char *s)
{

int i;

for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
_putchar('\n');

}
