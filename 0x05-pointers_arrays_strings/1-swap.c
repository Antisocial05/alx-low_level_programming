#include "main.h"
/**
* swap_int - Swaps the values of two integers.
* @a: pointer to the first integer
* @b: pointer to the second interger
*
*/
void swap_int(int *a, int *b)
{
	int des = *a;
	*a = *b;
	*b = des;
}
