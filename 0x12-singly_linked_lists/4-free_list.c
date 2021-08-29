#include<stdlib.h>
#include "lists.h"
/**
 * free_list - free memory location
 * @head: - pointer list_t type parameter
 *
 * Return: nothing
 */

void free_list(list_t *head)
{

free(head);
}
