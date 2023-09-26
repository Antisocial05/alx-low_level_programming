#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all elements
* @h: pointer to the head of the list
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_c++;
	}
	return (node_c);
}
