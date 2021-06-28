#include "holberton.h"
#include <stdio.h>
/**
 * main - checks code for ALX students
 *
 * Return: always 0 (success)
 */
int main(void)
{
  int n;

  n = 402;
  printf("n=%d\n", n);
  reset_to_98(&n);
  printf("n=%d\n", n);
  return(0);
}
