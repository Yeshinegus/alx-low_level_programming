#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - add new node
 * @h: heade pointer
 * @n: int value
 * Return: listint_t header
 *
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
listint_t *head;
listint_t *current;
listint_t *new;

head = current = *h;
new = malloc(sizeof(listint_t));
if (new != NULL)
{
while (head != NULL)
{
	current = head;
	head = head->next;
}
new->n = n;
new->next = NULL;
current->next = new;
}
free (new);
return (head);
}
