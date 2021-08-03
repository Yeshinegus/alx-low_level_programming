#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - length of linked list
 * @h: linked list ead
 *
 * Return: number of linked lists
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp;
size_t count;

temp = h;
count = 0;

while (temp != NULL)
{
	count++;
	temp = temp->next;
}
return (count);

}
