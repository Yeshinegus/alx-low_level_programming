#include "holberton.h"
/**
 * puts_half - returns a string length
 *
 * @s: is an integer pointer
 *
 */
void puts_half(char *s)
{

int i, half;
half = 0;
while (s[half])
{
half++;
}
for (i = half / 2; s[i] != '\0'; i++)
_putchar(s[i]);
_putchar('\n');

}
