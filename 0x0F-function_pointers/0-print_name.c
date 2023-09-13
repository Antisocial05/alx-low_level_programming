#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints a name using a function pointer
* @name: name to be printed
* @f: pointer to the function that prints a name
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
