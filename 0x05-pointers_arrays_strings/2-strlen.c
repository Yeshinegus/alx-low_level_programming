#include "holberton.h"
/**
 * _strlen - returns a string length
 *
 * @s: is an integer pointer 
 *
 */
int _strlen(char *s)
{

int i, count;
count = 0;
for (i = 0; s[i] != '\0'; i++)
count++;
return (count);
}
