#include "holberton.h"
/**
 * _print_rev_recursion - function of str concatnate
 *
 * @s: an array
 * Return: nothing
 *
 */
void _print_rev_recursion(char *s)
{
int i, j;
i = j = 0;
if (s[i] != '\0')
j++;
else if (s[i] == '\0' && j > 0)
{
_putchar(s[j - 1]);
j--;
_print_rev_recursion((s + (j - 1)));

}
_putchar('\n');
}
