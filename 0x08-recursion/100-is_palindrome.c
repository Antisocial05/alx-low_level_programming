#include "main.h"
#include <string.h>
int palindrome_helper(char *s, int start, int end);
/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to be checked
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}
/**
* palindrome_helper - Recursive helper function
* @s: The string to be checked
* @start: The starting index
* @end: The ending index
* Return: 1 if palindrome, 0 otherwise
*/
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}
