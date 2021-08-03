#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - lists nodes
 * @h: head pointer of Linked list
 *
 * Return: list of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t cnt;

	cnt = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		cnt++;
	}
return (cnt);
}
