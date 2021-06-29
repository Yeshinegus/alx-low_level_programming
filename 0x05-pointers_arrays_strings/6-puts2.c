#include "holberton.h"
/**
 * puts2 - returns a string length
 *
 * @s: is an integer pointer
 *
 */
void puts2(char *s)
{

int i;
for (i = 0; s[i] != '\0'; i++)

_putchar(s[i]);
_putchar('\n');

}
