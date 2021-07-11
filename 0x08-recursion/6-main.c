#include "holberton.h"
#include <stdio.h>
/**
 * main - checks code for ALX students
 *
 * Return: always 0 (success)
 */
int main(void)
{
int r;
 r = is_prime_number(1);
 printf("%d\n", r);
 r = is_prime_number(1024);
printf("%d\n", r);
 r = is_prime_number(16);
 printf("%d\n", r);
 r = is_prime_number(17);
 printf("%d\n", r);
 r = is_prime_number(25);
 printf("%d\n", r);
 r = is_prime_number(-1);
 printf("%d\n", r);
return(0);
}
