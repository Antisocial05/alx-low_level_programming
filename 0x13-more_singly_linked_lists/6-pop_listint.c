#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to a pointer to the head node
* Return: the data (n) of the head node or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
