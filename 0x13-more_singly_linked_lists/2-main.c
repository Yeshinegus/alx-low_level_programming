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
listint_t *head;
head = NULL;

add_nodeint(&head, 0);
add_nodeint(&head, 1);
add_nodeint(&head, 2);

print_listint(head);
return (0);
}
