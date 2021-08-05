#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - code checke for ALX School students
 * Return: integer
 *
 */
int main(void)
{
unsigned int n;

n = binary_to_uint("1");
printf("%u\n", n);
n = binary_to_uint("101");
printf("%u\n", n);
n = binary_to_uint("01000000");
printf("%u\n", n);
n = binary_to_uint("1e101");
printf("%u\n", n);

return (0);
}
