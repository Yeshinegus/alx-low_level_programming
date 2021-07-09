#include "holberton.h"
/**
 * _strncat - function of str concatnate
 * @dst: destination array
 * @src: source array
 * @n: integer param
 * Return: char pointer
 *
 */
char *_strncat(char *dst, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dst[j])
{
j++;
}
dst[j] = '\0';
for (i = 0; i < n && src[i] != '\0'; i++)
{
dst[j] = src[i];
j++;
}
return (dst);
}
