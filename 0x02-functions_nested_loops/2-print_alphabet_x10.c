#include "holberton.h"
/**
 * print_alphabet_x10 - return void
 * Return: void (success)
 * void - is return type
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char j;
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');

}
}
