#include "lists.h"

/**
* listint_len - returns the number of element
* @h: pointer to the head of the list
* Return: the number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
