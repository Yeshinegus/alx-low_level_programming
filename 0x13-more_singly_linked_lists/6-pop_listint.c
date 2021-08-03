#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - delete the first node
 * @head: heade pointer
 * 
 * Return: int value of header
 *
 */
int pop_listint(listint_t **head)
{
listint_t *h;
/* listint_t *temp;  */

h = *head;
if (h == NULL)
{
	return (0);
}
head = head->next;

return (h->n);
}
