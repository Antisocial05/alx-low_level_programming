#include "main.h"
int is_prime_recursive(int n, int divisor);
/**
* is_prime_number - checks if a number is a prime number
* @n: number to be checked
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

/**
* is_prime_recursive - Recursive helper function
* @n: The number to be checked
* @divisor: The current divisor to check for divisibility
* Return: 1 if prime, 0 otherwise
*/
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor + 1));
}
