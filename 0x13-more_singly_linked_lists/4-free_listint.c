#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a linked list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

