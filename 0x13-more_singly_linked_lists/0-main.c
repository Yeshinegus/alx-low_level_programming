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
listint_t hello = {5, NULL};
size_t n;

head = &hello;
new = malloc(sizeof(listint_t));
if(new == NULL)
{
printf("Error\n");
return (1);
}
new->n = 7;
new->next = head;
head = new;

n = print_listint(head);
printf("-> %lu elements\n", n);

free(new);
return (0);
}
