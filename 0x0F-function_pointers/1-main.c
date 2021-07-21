#include <stdio.h>
#include "function_pointers.h"
/*
 * print_elem - prints name as is
 * @elem: print element of array
 *
 * Return: nothing
 *
 */
void print_elem (int elem)
{

printf("%d\n", elem);

}
/*
 * print_elem_hex - print element of array in hex
 * @elem: element of array
 *
 * Return: nothing
 *
 */
void print_elem_hex(int elem)
{

printf("0x%x\n", elem);

}
/**
 * main - code checke for ALX School students
 * Return: nothing
 *
 */
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};

array_iterator(array, 5, &print_elem);
array_iterator(array, 5, &print_elem_hex);

return (0);
}
