#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - a function that concatnate
 * @s1: char pointer array
 * @s2: pointer array
 *
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
char *merged;
int size, size1, i, size2, j;

size1 = size2 = 0;
while (s1[size1])
	size1++;
while (s2[size2])
	size2++;
if (size1 != 0 || size2 != 0)
	merged = (char *) malloc(sizeof(char) * (size1 + size2 + 1));
if (s1 == NULL && s2 == NULL)
	return (NULL);
else
{
size = size1 + size2;
for (i = 0; i < size1 && s1[i] != '\0'; i++)
	merged[i] = s1[i];
for (j = 0; j < size2 && i < size; j++, i++)
	merged[i] = s2[j];
merged[i] = '\0';
}
return (merged);
}
