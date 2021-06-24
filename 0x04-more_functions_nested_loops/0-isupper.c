#include <ctype.h>
#include "holberton.h"
/**
 * _isupper - checks whether a char is upper or not
 * @c: integer value
 * Return: integer value 1 or 0
 */

int _isupper(int c)
{
char n;
n = 'A';

while (n <= 'Z')
{
if (c == n)
return (1);
n++;
}
return (0);

}
