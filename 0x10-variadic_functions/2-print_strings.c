#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: separate printed strings
 * @n: integer
 *
 * Return: nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (separator != NULL)
{
va_start(ap, n);

for (i = 0; i < n; i++)
{
/*
if ((char *)(va_arg(ap, char *)) == NULL)
	printf("nil");
*/
printf("%s", (char *)(va_arg(ap, char *)));
if (i != (n - 1))
printf("%s", separator);
}

va_end(ap);
}
printf("\n");
}
