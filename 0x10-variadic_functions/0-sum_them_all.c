#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the arguments
 * @n: integer var/arg
 *
 * Return: sum of args
 *
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list ap;

va_start(ap, n);	/* initialize the argument list */

sum = 0;
for (i = 0; i < n; i++)
	sum += va_arg(ap, int);	/* get the next value of int */

va_end(ap);	/* clean up */

return (sum);
}
