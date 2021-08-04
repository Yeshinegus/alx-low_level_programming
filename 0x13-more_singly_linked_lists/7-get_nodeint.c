#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - get nth node
 * @head: heade pointer
 * @index: index of the node
 *
 * Return: the node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *h;
unsigned int i;

h = head;
if (head == NULL)
{
	return (NULL);
}
for (i = 0; h != NULL && i != index; i++)
{
h = h->next;
if (i == index)
	return (h);
}
return (NULL);
}
