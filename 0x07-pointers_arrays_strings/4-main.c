#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{

char *s = "hello, world";
char *f = "world";
 char *t;
 
 t = _strpbrk(s, f);

printf("%s\n", t);


return (0);

}
