#include <stdio.h>
#include <stdlib.h>

/**
* main - prints opcodes of its own main function
* @argc: number of command-line arguments.
* @argv: Array of command-line arguement strings
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *main_ptr = (char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i] & 0xFF);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
