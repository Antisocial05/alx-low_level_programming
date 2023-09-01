#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: The string to be searched
* @accept: the string containing bytes to search for.
* Return: a pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				return (&s[i]);
		}
	}

	return (0);
}
