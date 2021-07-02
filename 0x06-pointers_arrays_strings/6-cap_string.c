#include "holberton.h"
/**
 * cap_string - display a string in upper case
 * @a: char array
 *
 * Return: character return
 *
 */
char *cap_string(char *a)
{
int i, j;
char s[13] = {' ', '\t', '\n', ',', ';', '.', '"', '?', '!', '(', ')', '{'};
i = 0;
while (a[i] != '\0')
{
if (i == 0)
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - 32;

}
for (j = 0; j < 13; j++)
{
if (a[i] == s[j])
{
i++;
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - 32;
}
else if (a[i] == 'A' && a[i] == 'Z')
a[i] = a[i] + 32;
}
i++;
}
return (a);
}
