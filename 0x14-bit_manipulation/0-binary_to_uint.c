#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - binary to unsigned int
 * @b: char const
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int rem, pow, bin;

rem = bin = 0;
pow = 1;
result = 0;
while (*b != '\0')
{
if (*b < 48 || *b > 49)
	return (0);
if (*b == 48)
{
	bin *= 10;
	bin += 0;
}
if (*b == 49)
{
	bin *= 10;
	bin += 1;
}
b++;
}
while (bin != 0)
{
rem = bin % 10;
bin /= 10;
result += (rem)*(pow);
pow *= 2;
}
return (result);
}
