#include "holberton.h"
/**
 * _puts_recursion - function of str concatnate
 *
 * @c: an array
 * Return: nothing
 *
 */
void _puts_recursion(char *c)
{
int i;
i = 0;
if (c[i] != '\0')
{
_putchar(c[i]);
i++;
_puts_recursion((c + i));

}
_putchar('\n');
}
