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
if (half % 2 == 0) 
for (i = half / 2; i < half; i++)
_putchar(s[i]);
else
for (i = (half + 1 ) / 2; i < half; i++)
_putchar(s[i]);
_putchar('\n');

}
