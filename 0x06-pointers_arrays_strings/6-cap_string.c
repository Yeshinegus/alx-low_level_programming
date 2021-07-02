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
int i;
i = 0;

while (a[i] != '\0')
{
if (i == 0)
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - 32;

}
else if (a[i] == ' ' || a[i] == '.' || a[i] == '\t' || a[i] == ';' || a[i] == ',' ||  a[i] == '\n' || a[i] == '!' || a[i] == '?' || a[i] == '\"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
{
i++;
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;

}
}
else
{
if (a[i] == 'A' && a[i] == 'Z')
a[i] = a[i] + 32;

}
}
return (a);
}
