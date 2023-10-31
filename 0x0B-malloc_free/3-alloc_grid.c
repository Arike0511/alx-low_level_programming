#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer.
 * @width: The width value
 * @height: The height value.
 * Return: Always 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int xin, yin;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
	{
		return (NULL);
	}

	for (xin = 0; xin < height; xin++)
	{
		mee[xin] = malloc(sizeof(int) * width);
		if (mee[xin] == NULL)
		{
			for (; xin >= 0; xin--)
			{
				free(mee[xin]);
			}
			free(mee);
			return (NULL);
		}
	}
	for (xin = 0; xin < height; xin++)
	{
		for (yin = 0; yin < width; yin++)
			mee[xin][yin] = 0;
	}
	return (mee);
}
