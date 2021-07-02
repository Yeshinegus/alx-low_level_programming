#include "holberton.h"
/**
 * string_toupper - display content a string in upper case
 * @a: char array
 *
 * Return: nothing to return
 *
 */
char *string_toupper(char *a)
{
int i;
i = 0;

while (a[i])
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - 32;

i++;
}
return (a);
}
