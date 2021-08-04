#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert node at index
 * @head: heade pointer
 * @idx: index of the node
 * @n: value to add at index
 * Return: the node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *h, *temp, *new;
unsigned int i;

h = *head;
temp = new = NULL;
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
{
	return (NULL);
}
for (i = 0; h != NULL && i != idx; i++)
{
h = h->next;
if (i == idx)
{
	temp = h;
	new->n = n;
	new->next = h;
	h = new;
}
}
free(temp);
return (new);
}
