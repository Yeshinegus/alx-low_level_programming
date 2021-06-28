#include "holberton.h"
#include <stdio.h>
/**
 * main - checks code for ALX students
 *
 * Return: always 0 (success)
 */
int main(void)
{

  char s[10] = "Holberton!";
  printf("%s\n", s);
  rev_string(s);
  printf("%s\n", s);
return (0);
}
