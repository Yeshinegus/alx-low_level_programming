#include "holberton.h"
/**
 * _strcat - function of str concatnate
 * @dst: destination array
 * @src: source array
 * Return: char pointer
 *
 */
char *_strcat(char *dst, char *src)
{
int i, j;
i = 0;
j = 0;
while (dst[j])
{
j++;
}
dst[j] = '\0';
for (i = 0; src[i] != '\0'; i++)
{
dst[j] = src[i];
j++;
}
return (dst);
}
