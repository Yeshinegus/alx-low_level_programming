#include "holberton.h"
/**
 * is_prime_number - function of str concatnate
 *
 * @n: an int
 *
 * Return: nothing
 *
 */
int is_prime_number(int n)
{
int i;
i = 2;
if (n <= 2)
  return ((n == 2) ? 1 : 0);
if (n % i == 0)
return (0);
 if ((i * i) > n)
return (1);
i++;
return (is_prime_number(n));

}
