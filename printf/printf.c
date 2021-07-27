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
char c;
int i;

i = 0;
va_start(ap, format);
while (format != NULL)
{
/* va_arg(ap, format);  */
if (sizeof(c) == sizeof(format))
{
/*vsnprintf(buffer, sizeof buffer, format, args); */
/* va_arg(ap, format); */
printf("%c", format[i]);

}
else
{
/* va_arg(ap, format); */
printf("%s", format[i]);
}
i++;
}
va_end(ap);
printf("\n");
return (i);
}
