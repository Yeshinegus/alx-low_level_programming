#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - print all values
 * @separator: separate printed strings
 * @n: integer
 *
 * Return: nothing
 *
 */
void print_all(const char *, const format, ...)
{
unsigned int i;
va_list ap;

va_start(ap, n);

while (isdigit(va_arg(ap, format)))
{
if (sizeof(format) == 4)
	printf("%d", va_arg(ap, format));
else
	printf("%f", va_arg(ap, format));
}
while (!isdigit(va_arg(ap, format)))
{
if (sizeof(va_arg(ap, format)) == 1)
	printf("%c", va_arg(ap, format));
else
	printf("%s", va_arg(ap, format);
}

va_end(ap);

printf("\n");
}
