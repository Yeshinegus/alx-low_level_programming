#include "holberton.h"
#include <stdio.h>
/**
 * main - checking code for ALX school students
 *
 * Return: nothing to return
 *
 */
int main(void)
{
char str[] = "Holberton School!\n";
char *ptr;

ptr = string_toupper(str);
printf("%s", ptr);
printf("%s", str);

return(0);
}
