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

add_nodeint_end(&head, 0);
add_nodeint_end(&head, 1);
add_nodeint_end(&head, 2);
print_listint(head);
free_listint2(&head);

printf("%p\n", (void *)head);
head = NULL;
return (0);
}
