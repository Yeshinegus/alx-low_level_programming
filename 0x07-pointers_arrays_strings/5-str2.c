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
  unsigned int i, j, inner, nlen;
  nlen = 0;
  while (needle[nlen] != '\0')
    nlen++;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; j < nlen && haystack[i] == needle[j]; j++)
{
if (j == 0)
{
inner = j;
}
if(j == nlen - 1)
{
return (haystack + inner);
}
}
}
return (0);
}
