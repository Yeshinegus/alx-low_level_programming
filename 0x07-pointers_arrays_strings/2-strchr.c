#include "holberton.h"
/**
 * _strchr - a function
 * @s: char pointer
 * @c: char var
 *
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return ('\0');
}
