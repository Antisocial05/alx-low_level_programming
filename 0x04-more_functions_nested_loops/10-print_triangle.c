#include "main.h"

/**
* print_triangle - printing triangle
* @size: triangle size
*/

void print_triangle(int size)
{
	int h, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
			for (j = 1; j <=  size; j++)
			{
				for (h = 0; h < size - j; h++)
				{
					_putchar(' ');
				}
				for (h = 0; h < j ; h++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
	}

}
