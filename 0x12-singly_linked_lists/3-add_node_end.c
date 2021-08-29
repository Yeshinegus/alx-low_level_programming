#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * add_node_end - adds a node at the end
 *
 * @h: head pointer to linked-list
 * 
 *
 * Return: list_t
 *
 */
size_t count_char(char *h);

list_t *add_node_end(list_t **head, const char *str)
{
list_t *h;
char *par;
list_t *node;

par = strdup(str);
node = malloc(sizeof(list_t));
h = *head;

if (str != NULL)
{
while (h->next != NULL)
	h = h->next;
h->next = node;
node->str = par;
node->len = count_char(par);
node->next = NULL;


return (h);
}
return (NULL);
}
/**
 * count_char - counts num of char
 * @h: pointer struct 
 *
 * Return: size_t
 *
 */

size_t count_char(char *h)
{
size_t count, i;

count = 0;
for(i = 0; h[i] != '\0'; i++)
	count++;

return (count);
}
