#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_list - prints the list
 * @h: list_t parameter
 *
 * Return: list_t
 *
 */
list_t print_list(const list_t *h)
{
list_t node, head;

/* node = malloc(sizeof(list_t)); */
head = &h;
node = &h;
while(node->next != NULL)
{
/* printf("[%d] %s", node-len, node->str); */
return (h);
/* node = node->next; */
}

return (node->len);
}
