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
add_nodeint_end(&head, 3);
add_nodeint_end(&head, 4);
add_nodeint_end(&head, 98);
add_nodeint_end(&head, 402);
print_listint(head);
insert_nodeint_at_index(&head, 5, 4096);
printf("_____________________\n");
print_listint(head);
free_listint2(&head);

return (0);
}
