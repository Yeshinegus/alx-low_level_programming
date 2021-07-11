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

if (*c != '\0')
{
_putchar(*c);
c++;
_puts_recursion(c);

}
else
_putchar('\n');
}
