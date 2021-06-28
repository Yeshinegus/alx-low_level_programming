#include "holberton.h"
/**
 * swap_int - swap 2 integers
 *@a: integer pointer
 *@b: integer pointer
 *Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;

}
