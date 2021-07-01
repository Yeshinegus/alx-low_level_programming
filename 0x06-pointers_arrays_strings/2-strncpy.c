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
int i;
i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)

dst[i] = src[i];

 for ( ; i < n; i++)
   dst[i] = '\0';

return (dst);
}
