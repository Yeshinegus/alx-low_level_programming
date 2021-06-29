#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copy of an array
 *
 * @dst: is a char array
 * @src: is a char array
 * Return: type char array
 */
char *_strcpy(char *dst, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dst[i] = src[i];
dst[i] = '\0';
return (dst);
}
