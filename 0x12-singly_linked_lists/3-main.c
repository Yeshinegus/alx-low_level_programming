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

add_node_end(&head, "Alexandro");
add_node_end(&head, "Yeshinegus");
add_node_end(&head, "Lee");
add_node_end(&head, "Nati");
add_node_end(&head, "Beri");

print_list(head);

return (0);
}
