#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - a function that duplicate an array
 *
 * @s: pointer array
 *
 * Return: char pointer
 */
char *_strdup(char *s)
{
char *dup;
int size, i;

size = 0;
while (s[size])
	size++;
if (size != 0)
	dup = (char *) malloc(sizeof(char) * (size + 1));
if (s == NULL || dup == NULL)
	return (NULL);
else
{
for (i = 0; i < size && s[i] != '\0'; i++)
	dup[i] = s[i];
dup[i] = '\0';
}
return (dup);
}
