#include "holberton.h"
/**
 * _memcpy - a function
 * @dst: char pointer
 * @src: char pointer
 * @n: unsigneg integer value
 * Return: char pointer
 */

char *_memcpy(char *dst, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dst[i] = src[i];
}
return (dst);
}
