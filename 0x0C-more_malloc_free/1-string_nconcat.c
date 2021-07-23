#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatnate strings
 * @s1: string parameter
 *
 * @s2: string paramenter
 * Return: character pointer
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, s1len;
char *temp;

i = j = s1len = 0;
if (s1 == NULL && s2 == NULL)
	return (NULL);
else if ((s1 != NULL && s2 == NULL) || (s2 != NULL && n == 0 && s1 != NULL))
	return (s1);
else if (s1 != NULL)
{
	while(s1[i] != '\0')
	{
		s1len++;
	}
}
temp = (char *)realloc(s1, sizeof(char) * n);
if (temp == NULL)
	return (NULL);
for ( ; i < (n + s1len); i++)
{
if (s1len > i)
	temp[i] = s1[i];
if (j < n && s1len <= i)
	temp[i] = s2[j];
}
if (i == n + s1len)
{
	temp[i] = '\0';
	s1 = temp;
}
return (s1);
}
