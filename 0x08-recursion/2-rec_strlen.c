#include "holberton.h"
/**
 * _strlen_recursion - function of str concatnate
 *
 * @s: an array
 * Return: nothing
 *
 */
int _strlen_recursion(char *s)
{
int i;
i = 0;
if (s[i])
{
	i++;
	_strlen_recursion(s + 1);

}
return (i);
}
