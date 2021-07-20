#include "function_pointers.h"
/*
 * print_name - prints a name
 * @name: pointer char name
 * @f: function pointer with char parameter
 *
 * Return: nothing
 */
void print_name (char *name, void (*f)(char *))
{
f(name);
}
