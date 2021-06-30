#include "holberton.h"
/**
 * _strcmp - function of str concatnate
 * @dst: destination array
 * @src: source array
 *
 * Return: char pointer
 *
 */
int _strcmp(char *dst, char *src)
{
int i;
i = 0;

for (i = 0; dst[i] != '\0' || src[i] != '\0'; i++)
{
if (dst[i] < src[i])
return (-15);
else if (dst[i] > src[i])
return (15);
else if( dst[i] != src[i])
return (15);
}
return (0);
}
