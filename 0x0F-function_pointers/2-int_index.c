#include "function_pointers.h"

/**
* int_index - searches for an integer in an array
* @array: pointer to an array of integers
* @size: number of elements in the array
* @cmp: pointer to the comparison function
* Return: index of the first element for which does not return 0.
* if no element matches <= 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
