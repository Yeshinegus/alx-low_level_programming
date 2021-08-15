#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - free allocated memory
 * @head: heade pointer
 * 
 * Return: void or nothing
 *
 */
void free_listint2(listint_t **head)
{
listint_t *h;
h = *head;

while (h != NULL)
{
	
	free(h);
	
}
free(*head);
head = NULL;
}
