#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_list - prints the list
 * @h: list_t parameter
 *
 * Return: list_t
 *
 */
size_t listprint(const list_t *head);
size_t print_list(const list_t *h)
{
const list_t *ptr;
size_t count;

/* node = malloc(sizeof(list_t)); */
count = 0;
ptr = h;
while(ptr != NULL)
{
/* printf("[%d] %s", ptr->len, ptr->str); */
count = listprint(ptr);

/* ptr = ptr->nextb; */
return (count);
}

return (count);
}
size_t listprint(const list_t *head)
{
size_t cnt;
const list_t *temp;

temp = head;
cnt = 0;
while(temp != NULL)
{
if (temp->str == NULL)
{
printf("[%d] %s\n", 0, "nil");
/* temp = temp->next; */
}
/* while(temp != NULL)
{*/
else
printf("[%d] %s\n", temp->len, temp->str);
temp = temp->next;
cnt++;
}

return (cnt);
}
