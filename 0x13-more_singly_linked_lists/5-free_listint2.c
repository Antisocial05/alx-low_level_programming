#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 -- frees a listint_t list and set the head to NULL
* @head: a pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		cur = (*head)->next;
		free(*head);
		*head = cur;
	}
}
