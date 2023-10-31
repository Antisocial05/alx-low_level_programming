#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
* create_file - creates a file
* @filename: name of file to be created
* @text_content: content of the file to be created
* Return: always an integer
*/
int create_file(const char *filename, char *text_content)
{
	FILE *filepoint = NULL;

	filepoint = fopen(filename, "w");

	if (filepoint == NULL || filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (fputs(text_content, filepoint) == EOF)
		{
			fclose(filepoint);
			return (-1);
		}
	}
	fclose(filepoint);
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1);

	return (1);
}
