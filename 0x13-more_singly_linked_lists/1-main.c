#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * main - code checke for ALX School students
 * Return: integer
 *
 */
int main(void)
{
listint_t *head;
listint_t *new;
listint_t hello = {9, NULL};
size_t n;

head = &hello;
new = malloc(sizeof(listint_t));
if(new == NULL)
{
printf("Error\n");
return (1);
}
new->n = 8;
new->next = head;
head = new;

n = listint_len(head);
printf("-> %lu elements\n", n);
printf("\n");
free(new);
return (0);
}
