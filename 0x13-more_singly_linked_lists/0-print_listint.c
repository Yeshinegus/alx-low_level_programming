#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_listint - prints the list
 *
 * @head: pointer listint_t
 *
 * Return: listint_t
 *
 */
size_t listprint(const listint_t *head);
size_t print_listint(const listint_t *h)
{
const listint_t *ptr;
size_t count;

/* node = malloc(sizeof(list_t)); */
count = 0;
ptr = h;
while (ptr != NULL)
{
/* printf("[%d] %s", ptr->len, ptr->str); */
count = listprint(ptr);

/* ptr = ptr->nextb; */
return (count);
}

return (count);
}
/**
 * listprint - prints linked list
 * @head: list_t struct type parameter
 * Return: size_t
 *
 */

size_t listprint(const listint_t *head)
{
size_t cnt;
const listint_t *temp;

temp = head;
cnt = 0;
while (temp != NULL)
{
if (temp->n == NULL)
{
printf("%d\n", 0);
/* temp = temp->next; */
}
else
printf("%d\n", temp->n);
temp = temp->next;
cnt++;
}

return (cnt);
}
