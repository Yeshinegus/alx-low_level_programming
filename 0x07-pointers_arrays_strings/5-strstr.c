#include "holberton.h"
/**
 * _strstr - a function
 * @haystack: char pointer
 * @needle: char ptr
 *
 * Return: char pointer
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, k, inner;
for (i = 0; needle[i] != '\0'; i++)
{
for (j = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == haystack[j])
{
inner = i;
k = j;
while(needle[inner] != '\0')
{
if(needle[inner] == haystack[k])
inner++;
k++;
}
return (&haystack[j]);
}
}
}
return ('\0');
}
