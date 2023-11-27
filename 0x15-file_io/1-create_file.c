#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int folder;
	int newletters;
	int rwrit;

	if (!filename)
	{
		return (-1);
	}

	folder = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (folder == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (newletters = 0; text_content[newletters]; newletters++)
		;

	rwrit = write(folder, text_content, newletters);

	if (rwrit == -1)
	{
		return (-1);
	}

	close(folder);

	return (1);
}
