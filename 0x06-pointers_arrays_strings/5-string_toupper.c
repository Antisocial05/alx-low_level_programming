#include "main.h"
/**
* string_toupper -  changes all lowercase letters of a string to uppercase.
* @str: input value
* Return: Always 0 (Success)
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
