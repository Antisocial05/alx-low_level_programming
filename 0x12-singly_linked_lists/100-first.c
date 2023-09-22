#include <stdio.h>
/**
* my_message - prints a message
*/

void __attribute__((constructor)) my_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
