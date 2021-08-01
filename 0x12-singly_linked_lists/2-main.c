#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * main - code checke for ALX School students
 * Return: integer
 *
 */
int main(void)
{
list_t *head;

head = NULL;

add_node(&head, "Alexandro");
add_node(&head, "Yeshinegus");
add_node(&head, "Lee");

return (0);
}
