#include "holberton.h"
/**
 * _strncpy - function of str concatnate
 * @dst: destination array
 * @src: source array
 * @n: integer param
 * Return: char pointer
 *
 */
char *_strncpy(char *dst, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dst[j])
{
j++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dst[j] = src[i];
j++;
}

return (dst);
}
