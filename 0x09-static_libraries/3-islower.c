#include "holberton.h"
/**
 * _islower - checks if lower
 * @c: is integer value
 *
 * Return: always 1 (if true)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
