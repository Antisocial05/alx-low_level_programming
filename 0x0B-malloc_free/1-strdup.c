#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string
* @str: The input string to be duplicate
* Return: pointer to the duplicated string, 0 otherwise
*/
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len = 0, i;
	duplicate = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len ; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
