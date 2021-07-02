#include "holberton.h"
/**
 * leet - function of
 * @c: pointer variable
 *
 * Return: char var
 */
char *leet(char *c)
{
int i, j;
char a[5] = {'a', 'e', 'o', 't', 'l'};
char b[5] = {'4', '3', '0', '7', '1'};
for (i = 0; *(c + i) != '\0'; i++)
{
for (j = 0; j < 5; j++)
if (c[i] == a[j] || c[i] == a[j] - 32)
c[i] = b[j];
}

return (c);
}
