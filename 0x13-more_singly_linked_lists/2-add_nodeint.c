#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - add new node
 * @h: heade pointer
 * @n: int value
 * Return: listint_t header
 *
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
listint_t *head;
listint_t *new;

head = *h;
new = malloc(sizeof(listint_t));
if (new != NULL)
{
new->n = n;
new->next = NULL;
head = new;
}
return (head);
}
