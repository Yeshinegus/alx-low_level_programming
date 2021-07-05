#include "holberton.h"
/**
 * _strspn - a function
 * @s: char pointer
 * @c: char var
 *
 * Return: char pointer
 */

unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j, index, checker;
  checker = 0;
  index = 0;
for (i = 0; s[i] != '\0'; i++)
{
  checker = 0;
  for (j = 0; accept[j] != '\0'; j++)
  {
    if (s[i] == accept[j])
      {
    checker = 1;
    if (i > index)
      index = i;
       }
  }
  if (checker == 0)
      return (0);
}
  while (s[index] != ' ' || s[index] != '\0')
    index++;

return (index);
}
