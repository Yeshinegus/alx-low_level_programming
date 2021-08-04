#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete nth node
 * @head: heade pointer
 * @index: index of the node to be deleted
 *
 * Return: the node
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *next;
unsigned int i;

temp = *head;
if (head == NULL)
{
	return (-1);
}
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index-1; i++)
{
temp = temp->next;
if (temp == NULL || temp->next == NULL)
	return (-1);
next = temp->next->next;
free(temp->next);
temp->next = next;
return (1);
}

return (-1);
}
