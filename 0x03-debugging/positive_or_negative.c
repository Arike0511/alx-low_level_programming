#include "main.h"
/**
 * main - A program that shows the conditional statement between numbers
 * Return: (0) success
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}

	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
