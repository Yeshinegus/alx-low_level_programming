#include "holberton.h"
/**
 * leet - function of 
 * @c: pointer variable
 *
 * Return: char var
 */
char *leet(char *c)
{
  int i;
  i = 0;
while (c[i])
{
if (c[i] == 'a' || c[i] == 'A')
c[i] = '4';
else if (c[i] == 'e' || c[i] == 'C')
c[i] = '3';
else if (c[i] == 'o' || c[i] == 'O')
c[i] = '0';
else if (c[i] == 't' || c[i] == 'T')
c[i] = '7';
else if (c[i] == 'l' || c[i] == 'L')
c[i] = '1';
}
return (c);
}