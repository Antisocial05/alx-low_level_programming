#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the diagonals of a square matrix.
* @a: pointer to the square matrix.
* @size: Size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
