#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int za;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	za = n % 10;
		printf("Last digit of %d is ", n);
	if (n > 5)
	{
	printf("%d and is greater than 5\n", za);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", za);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", za);
	}
	return (0);
}
