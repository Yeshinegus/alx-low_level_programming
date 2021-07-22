#include <stdio.h>
#include "function_pointers.h"
/*
 * print_name - prints a name
 * @name: pointer char name
 * @f: function pointer with char parameter
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
	printf("no name\n");
f(name);
}
