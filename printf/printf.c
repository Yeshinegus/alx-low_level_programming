#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - prints numbers
 * @format: parameter of char const
 * Return: int value
 *
 */
int _printf(const char *format, ...)
{
va_list ap;
const char *p, *sval;
int ival, count;
double dval;

count = 0;
p = format;
va_start(ap, format);
while (*p)
{
if (*p != '%')
{
putchar(*p);
continue;
}
switch (*++p)
{
	case 'd':
		ival = va_arg(ap, int);
		printf("%d", ival);
		break;
	case 'f':
		dval = va_arg(ap, double);
		printf("%f", dval);
		break;
	case 's':
		for(sval = va_arg(ap, char *); *sval; sval++)
		{
			putchar(*sval);
			count++;
		}
		return (count);
		break;
	default:
		putchar(*p);
		break;
}
}
va_end(ap);
return (count);
}
