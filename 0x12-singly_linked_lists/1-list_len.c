#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * list_len - prints the list
 * @h: list_t parameter
 *
 * Return: list_t
 *
 */
list_t list_len(const list_t *h)
{
list_t node, head;

/* node = malloc(sizeof(list_t)); */
head = &h;
node = &h;
while(node->next != NULL)
{
/* printf("[%d] %s", node-len, node->str); */
return (node->len);
/* node = node->next; */
}

return (0);
}
