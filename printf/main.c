#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - ALX studets code tester
 * Return: always 0 success
 *
 */
int main(void)
{
int len, len2;
unsigned int ui;
void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;

_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

_printf("Negative:[%d ]\n", -762534);
printf("Negative:[%d ]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned Hexadecimal:[%x, %X]\n", ui);
printf("Unsigned Hexadecimal:[%x, %X]\n", ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);


return (0);

}

