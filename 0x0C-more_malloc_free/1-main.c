#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * main - checks the code for ALX School students
 *
 * Return: Always 0
 */
int main(void)
{
char *concat;

concat = string_nconcat("Holberton ", "School !!!", 6);
printf("%s\n", concat);

free(concat);
return (0);
}
