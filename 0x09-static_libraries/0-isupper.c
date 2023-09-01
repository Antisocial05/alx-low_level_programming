#include "main.h"
/**
*  _isupper - checks for upper case
* @c: the parameter to be checked
*
* Return: 1 if c is upper case , 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
