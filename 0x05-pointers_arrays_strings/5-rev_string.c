#include "holberton.h"
/**
 * rev_string - returns a string in reverse order
 *
 * @s: is an character pointer
 *
 */
void rev_string(char *s)
{

int i, temp, j;
j = 0;

while (s[j])
{
j++;
}

for (i = 0; i < j / 2; i++)
{
temp = s[i];
s[i] = s[j - (i + 1)];
s[j - (i + 1)] = temp;
}
}
