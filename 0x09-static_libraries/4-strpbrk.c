#include "holberton.h"
/**
 * _strpbrk - a function
 * @s: char pointer
 * @accept: char ptr
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return ('\0');
}
