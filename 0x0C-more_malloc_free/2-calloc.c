#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each elements in the bytes
* Return: a pointer to the allocated memory
* if nmemb or size is 0, or if mallocc fails return NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
