#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory block to reallocate
* @old_size: the current size, in bytes for ptr
* @new_size: the new size, in bytes of the new memory block
* Return: a pointer to the newly allocated memory block
* if new_size == old_size , return ptr
* if malloc fails, returns NULL
* if new_size is 0 and ptr is not NULL, frees ptr and returns NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_size = old_size;
	}

	for (i = 0; i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
