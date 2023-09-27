#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new_node
* @head:pointer to a pointer to the head of the list
* @n: integer to be stored in the new node
* Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
