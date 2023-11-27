#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int folder;
	ssize_t nrd, nwrit;
	char *buffering;

	if (!filename)
	{
		return (0);
	}

	folder = open(filename, O_RDONLY);

	if (folder == -1)
	{
		return (0);
	}

	buffering = malloc(sizeof(char) * (letters));
	if (!buffering)
	{
		return (0);
	}

	nrd = read(folder, buffering, letters);
	nwrit = write(STDOUT_FILENO, buffering, nrd);

	close(folder);

	free(buffering);

	return (nwrit);
}
