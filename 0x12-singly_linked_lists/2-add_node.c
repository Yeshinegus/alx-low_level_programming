#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * add_node - prints the list
 * @head: head pointer to linked-list
 * @str: char string
 *
 * Return: list_t
 *
 */
size_t print_list(const char *list_t);
list_t *add_node(const list_t **head, const char *str)
{
const list_t *node, *h;
size_t nelem;

nelem = 0;
node = malloc(sizeof(list_t));
h = head;

while (str != NULL)
{
node->str = str;
node->len = sizeof(str);
node->next = h;
h = node;
}
nelem = listprint(node);
return (nelem);
}
