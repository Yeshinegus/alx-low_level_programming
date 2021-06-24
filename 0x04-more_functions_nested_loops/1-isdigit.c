#include "holberton.h"
#include <ctype.h>

/**
 * _isdigit - check if a digit or not
 * @c: character
 * Return: either 0 or 1
 */

int _isdigit(char c)
{

if (c == 48 && c < 58)
return (1);
 /* n = isdigit(c); */

return (0);

}
