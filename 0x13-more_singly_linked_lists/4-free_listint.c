#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - free allocated memory
 * @head: heade pointer
 * 
 * Return: void or nothing
 *
 */
void free_listint(listint_t *head)
{
listint_t *h;
h = head;

while (h != NULL)
{
	head = h;
	free(head);
	h = h->next;
}
free(h);
}
