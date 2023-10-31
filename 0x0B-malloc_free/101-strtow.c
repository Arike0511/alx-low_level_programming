#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flit, cimi, win;

	flit = 0;
	win = 0;

	for (cimi = 0; s[cimi] != '\0'; cimi++)
	{
		if (s[cimi] == ' ')
			flit = 0;
		else if (flit == 0)
		{
			flit = 1;
			win++;
		}
	}

	return (win);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int ina, kin = 0, len = 0, words, cin = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (ina = 0; ina <= len; ina++)
	{
		if (str[ina] == ' ' || str[ina] == '\0')
		{
			if (cin)
			{
				end = ina;
				tmp = (char *) malloc(sizeof(char) * (cin + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[kin] = tmp - cin;
				kin++;
				cin = 0;
			}
		}
		else if (cin++ == 0)
			start = ina;
	}

	matrix[kin] = NULL;

	return (matrix);
}
