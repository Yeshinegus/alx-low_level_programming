#include "holberton.h"
/**
 * rev_string - returns a string in reverse order
 *
 * @s: is an character pointer
 *
 */
void rev_string(char *s)
{

int i, j;
j = 0;
for (i = 0; s[i] != '\0'; i++)
j++;

for (i = j - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');

}
