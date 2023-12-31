#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node
* @head:pointer to the pointer of the head node
* @str: string to be duplicated and stored in thr new node
* Return: the address of the new element of null if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
