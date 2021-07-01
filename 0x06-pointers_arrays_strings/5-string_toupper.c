#include "holberton.h"
/**
 * string_toupper - display content a string in upper case
 * @a: char array
 *
 * Return: nothing to return
 *
 */
void string_toupper(char *a)
{
int i;
i = 0;

while (a[i])
{
if (a[i] >= 97 && a[i] <= 122)
{
a[i] = a[i] - 32;
_putchar(a[i]);
}
_putchar(a[i]);
i++;
}
_putchar('\n');
}
