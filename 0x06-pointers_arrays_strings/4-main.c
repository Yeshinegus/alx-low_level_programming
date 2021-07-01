#include "holberton.h"
#include <stdio.h>
/**
 * print_array - display content of an array
 * @a: integer array
 * @n: integer value
 * Return: nothing to return
 *
 */
void print_array(int *a, int n)
{
int i;
i = 0;

while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}
/**
 * main - check codes for ALX school students
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
print_array(a, sizeof(a)/sizeof(int));
reverse_array(a, sizeof(a)/sizeof(int));
print_array(a, sizeof(a)/sizeof(int));
return (0);
}
