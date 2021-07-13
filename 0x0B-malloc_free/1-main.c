#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - code tester for ALX School students
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{

char *s;

s = _strdup("Holberton");
if (s == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);

}
