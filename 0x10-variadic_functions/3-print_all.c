#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - print anything based on format
* @format: the format string specifier
* @...: the arguments to  print
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "", *str;
	int i = 0, p = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int)), sep = ", ", p = 1;
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int)), sep = ", ", p = 1;
		else if (format[i] == 'f')
			printf("%s%f", sep, (float)va_arg(args, double)), sep = ", ", p = 1;
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s%s", sep, (str ? str : "(nil)"));
			sep = ", ", p = 1;
		}
		i++;
	}
	va_end(args);
	if (p)
		printf("\n");
}
