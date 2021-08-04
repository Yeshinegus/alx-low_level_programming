#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - get sum of listints
 * @head: heade pointer
 *
 * Return: the sum
 *
 */
int sum_listint(listint_t *head)
{
listint_t *h;
int sum;

sum = 0;
if (head == NULL)
{
	return (0);
}
for (h = head; h != NULL; h = h->next)
{
sum += h->n;
}
return (sum);
}
