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

s = str_concat("Betty ","Holberton");
if (s == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);

}
