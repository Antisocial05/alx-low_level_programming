#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - applies a function to each element
* @array: pointer to an array of integers
* @size: size of the array
* @action: pointer to the function
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
