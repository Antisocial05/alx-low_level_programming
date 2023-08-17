#include "main.h"
/**
* mul - function that multiplies two integers
* @a: parameter to be checked
* @b: parameter to be checked
*
* Return: Always 0 (success)
*/
int mul(int a, int b)
{
	int result = 0;

	if (a < 0 && b < 0)
	{
		a = -a;
		b = -b;
	}
	else if (a < 0)
	{
		a = -a;
		result = -1;
	}
	else if (b < 0)
	{
		b = -b;
		result = -1;
	}
	while (b > 0)
	{
		result += a;
		b--;
	}
	return (0);
}


