#include <stdio.h>
#include "holberton.h"
/**
 * main - checks the code for ALX School students
 *
 * Return: always 0
 */

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));

c = 'a';
printf("%c: %d\n", c, _isupper(c));

return (0);

}
