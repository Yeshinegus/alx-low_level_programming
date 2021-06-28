#include "holberton.h"
#include <stdio.h>
/**
 * main - checks code for ALX students
 *
 * Return: always 0 (success)
 */
int main(void)
{
  char *str;
  int len;
  str = "Holberton!";
  len = _strlen(str);

printf("%d \n", len);
return (0);
}
