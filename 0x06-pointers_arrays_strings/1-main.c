#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for alx school students.
 *
 * Return: always an int
 *
 */
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "world!\n";
char *ptr;

printf("%s\n", s1);
printf("%s", s2);
ptr = _strncat(s1, s2, 1);
printf("%s\n", s1);
printf("%s", s2);
printf("%s\n", ptr);
ptr = _strncat(s1, s2, 1024);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);
return (0);
}
