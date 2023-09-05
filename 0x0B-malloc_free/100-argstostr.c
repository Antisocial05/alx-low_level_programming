#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all program arguments into a single string
* @ac: the number of arguements
* @av: an array of argument strings
* Return: Pointer to the concatenated string, otherwise 0
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_len = 0;
	char *res = (char *)malloc((total_len + 1) * sizeof(char));
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_len++;
		}
	}
	total_len += ac - 1;
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			res[position] = av[i][j];
			position++;
		}
		if (i < ac - 1)
		{
			res[position] = '\n';
			position++;
		}
	}
	res[position] = '\0';
	return (res);
}
