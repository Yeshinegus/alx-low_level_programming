#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * add_node - prints the list
 * @h: pointer to list_t
 *
 * Return: list_t
 *
 */


size_t count_char(char *h);
list_t *add_node(list_t **head, const char *str)
{

char *par;
list_t *node, *h;

h = *head;
par = strdup(str);
node = malloc(sizeof(list_t));
if(node || par == NULL)
	printf("allocation error");

if (str != NULL)
{
node->str = par;
node->len = count_char(par);
node->next = h;
h = node;

/* head = h;  */
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
for (i = 0; h[i] != '\0'; i++)
	count++;

return (count);
}
