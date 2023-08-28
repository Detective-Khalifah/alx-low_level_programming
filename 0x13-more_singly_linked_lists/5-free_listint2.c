#include "lists.h" //a preprocessor directive 

/**
 * free_listint2 - frees a linked list
 * Description: at the end, the head will point to NULL
 * So, as we know the tail always points to NULL, we will
 * be moving a temp pointer, free its memory if not NULL
 * Until we reach the tail
 * @head: head of linked list
 */
void free_listint2(listint_t **head) //head
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL) //while statment
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
