#include "holberton.h"
/**
 * _isalpha - is entry point
 * @c: int c parameter
 * Return: - always 1 if true
 * 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
return (0);
}
