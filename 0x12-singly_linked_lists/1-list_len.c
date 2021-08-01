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
size_t listlen(const list_t *head);
size_t list_len(const list_t *h)
{
const list_t *ptr;
size_t count;

/* node = malloc(sizeof(list_t)); */
count = 0;
ptr = h;
while(ptr != NULL)
{
/* printf("[%d] %s", ptr->len, ptr->str); */
count = listlen(ptr);

/* ptr = ptr->nextb; */
return (count);
}

return (count);
}
size_t listlen(const list_t *head)
{
size_t cnt;
const list_t *temp;

temp = head;
cnt = 0;
while(temp != NULL)
{
cnt++;
temp = temp->next;

}

return (cnt);
}
