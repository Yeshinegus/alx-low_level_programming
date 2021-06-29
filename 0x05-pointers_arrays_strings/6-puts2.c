#include "holberton.h"
/**
 * puts2 - returns a string length
 *
 * @s: is an integer pointer
 *
 */
void puts2(char *s)
{
int j;
int i;
j = 0;
while (s[j])
{
j++;
}
for (i = 0; i < j; i += 2)

_putchar(s[i]);
_putchar('\n');

}
